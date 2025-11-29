@class NSString, NSNumber;

@interface BizInteractiveUserInfo : NSObject

@property (copy, nonatomic) NSString *headImgUrl;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *identityName;
@property (retain, nonatomic) NSNumber *identityType;

+ (id)makeWithHeadImgUrl:(id)a0 nickname:(id)a1 identityName:(id)a2 identityType:(id)a3;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
