@class FinderEventBaseResponse, NSMutableArray;

@interface InitTorchLiveResponse : WXPBGeneratedMessage

@property (retain, nonatomic) FinderEventBaseResponse *baseResp;
@property (nonatomic) unsigned int startRemainingTime;
@property (nonatomic) BOOL isTorcher;
@property (nonatomic) unsigned long long torcherTotal;
@property (nonatomic) unsigned long long certId;
@property (nonatomic) BOOL isLightTorch;
@property (nonatomic) BOOL isStart;
@property (nonatomic) BOOL isJoinRunWith;
@property (nonatomic) unsigned long long joinRunWithTotal;
@property (nonatomic) unsigned int startRemainingDay;
@property (retain, nonatomic) NSMutableArray *bgmUrls;
@property (nonatomic) BOOL isAutoAdd;

+ (void)initialize;

@end
