@class NSString, NSMutableArray;

@interface MMFinderLiveWinterOlympicTorchInfo : NSObject

@property (nonatomic) unsigned int remainingTime;
@property (nonatomic) BOOL isTorcher;
@property (nonatomic) unsigned long long torcherTotal;
@property (nonatomic) unsigned long long certId;
@property (nonatomic) BOOL isLightTorch;
@property (nonatomic) BOOL isStarted;
@property (nonatomic) BOOL isJoinRunWith;
@property (nonatomic) unsigned long long joinRunWithTotal;
@property (nonatomic) unsigned int startRemainingDay;
@property (retain, nonatomic) NSMutableArray *bgmUrls;
@property (readonly, nonatomic) unsigned long long nextCertificateOperation;
@property (retain, nonatomic) NSString *fromWxUsername;
@property (retain, nonatomic) NSString *fromFinderUsername;
@property (nonatomic) BOOL isAutoAdd;

- (void)updateWithInitTorchLiveResponse:(id)a0;
- (void).cxx_destruct;

@end
