@class NSString;

@interface HTSLiveRelaxVideoFragmentStats : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *momentCnt;
@property (copy, nonatomic) NSString *unpublishMomentCnt;
@property (copy, nonatomic) NSString *recreationMomentCnt;
@property (copy, nonatomic) NSString *unpublishRecreationMomentCnt;

+ (id)descriptor;

@end
