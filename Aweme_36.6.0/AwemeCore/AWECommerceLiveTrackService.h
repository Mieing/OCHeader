@class NSString, AWEAwemeModel;

@interface AWECommerceLiveTrackService : HTSService <AWECommerceLiveTrackService>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackLiveEffectADEventWithLabel:(id)a0 extra:(id)a1;
- (void)trackLiveComponentADEventWithLabel:(id)a0 refer:(id)a1 extra:(id)a2;
- (void)trackLiveCellEventWithLabel:(id)a0 event:(id)a1 model:(id)a2 extra:(id)a3;
- (void)trackLiveInnerReceiveWithParams:(id)a0;
- (void)resetModelWithLiveBreak;
- (void)trackOtherclickAdLiveInnerDislike:(id)a0;
- (void)trackURLWithURLModelWithLabel:(id)a0 extra:(id)a1 trackLabel:(id)a2;
- (BOOL)checkIsSameModel:(id)a0 andExtra:(id)a1;
- (void)resetModelWithDiffAweme:(id)a0;
- (void).cxx_destruct;

@end
