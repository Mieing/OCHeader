@class NSString, NSDictionary;

@interface BDMannorAdShowEventConfig : NSObject

@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSString *refer;
@property (copy, nonatomic) NSString *bindComponentType;
@property (copy, nonatomic) NSDictionary *extra;
@property (copy, nonatomic) NSDictionary *adExtraData;
@property (nonatomic) long long bindComponentLifecycle;

- (void).cxx_destruct;

@end
