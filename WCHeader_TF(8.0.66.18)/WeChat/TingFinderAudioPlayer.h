@class WCFinderDataItem;

@interface TingFinderAudioPlayer : TingAudioPlayer

@property (retain, nonatomic) WCFinderDataItem *fetchedDataItem;

+ (id)audioUrlForDataItem:(id)a0;

- (id)audioInfo;
- (BOOL)isPlayRateSupported;
- (void)prepareToPlay;
- (void)onSuccessWithDataItem:(id)a0;
- (void).cxx_destruct;

@end
