@class NSDictionary, NSString;

@interface AWELiveXPlayRealNameAuthConnection : NSObject <AWEBatManAuthServiceTrakerDelegate>

@property (retain, nonatomic) NSDictionary *extraInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)commonParams:(id)a0;
- (id)initWithExtraInfo:(id)a0;
- (void)onBatManRealNameEvent:(long long)a0 result:(long long)a1 extraInfo:(id)a2;
- (void)authTrackerInterconnectionEnquiryName:(int)a0 info:(id)a1;
- (void)authTrackerInterconnectionNameMutual:(int)a0 info:(id)a1;
- (void)authTrackerInterconnectionNameMutualWindowShow;
- (void)authTrackerInterconnectionNameMutualWindowClickInfo:(id)a0;
- (void)authTrackerInterconnectionNameTwoWindowShow;
- (void)authTrackerInterconnectionNameTwoWindowClick:(id)a0;
- (void)authTrackerInterconnectionNameTwoWindowResult:(int)a0 info:(id)a1;
- (void)authTrackerInterconnectionNameCompleteSuccess:(id)a0;
- (long long)xplayAuthResultTypeWithBatManAuthTrackerResult:(int)a0;
- (id)_realNameTrackEventStringWithEvent:(long long)a0 result:(long long)a1;
- (void).cxx_destruct;

@end
