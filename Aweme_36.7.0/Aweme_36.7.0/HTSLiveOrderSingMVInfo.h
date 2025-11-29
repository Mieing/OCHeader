@class NSString, IESLiveMVBaseInfo;

@interface HTSLiveOrderSingMVInfo : IESLivePBBaseMessage

@property (retain, nonatomic) IESLiveMVBaseInfo *mvBaseInfo;
@property (nonatomic) BOOL hasMvBaseInfo;
@property (copy, nonatomic) NSString *userId;
@property (nonatomic) BOOL isHighQuality;
@property (nonatomic) BOOL isLocked;
@property (nonatomic) int mvType;
@property (nonatomic) int playStatus;

+ (id)descriptor;

@end
