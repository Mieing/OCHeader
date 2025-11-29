@class NSString, NSDictionary;

@interface CSJRenderClickEventModel : NSObject

@property (nonatomic) long long areaType;
@property (copy, nonatomic) NSString *clickAreaType;
@property (copy, nonatomic) NSString *clickAreaId;
@property (copy, nonatomic) NSDictionary *clickInfo;
@property (copy, nonatomic) NSDictionary *rectInfo;
@property (nonatomic) long long userBehaviorType;
@property (nonatomic) long long clickAreaCategory;
@property (nonatomic) long long convertActionType;

- (void).cxx_destruct;
- (id)init;
- (id)initWithDictionary:(id)a0;

@end
