@class NSArray;

@interface MMConfSDKUserMap : NSObject

@property (retain, nonatomic) NSArray *riskUserInfos;
@property (retain, nonatomic) NSArray *validUserInfos;

+ (id)userMapWithUserInfos:(id)a0;

- (id)initWithRiskUserInfos:(id)a0 validUserInfos:(id)a1;
- (id)riskUserNames;
- (void).cxx_destruct;

@end
