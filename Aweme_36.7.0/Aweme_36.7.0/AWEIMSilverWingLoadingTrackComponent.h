@class NSString, NSMutableDictionary;

@interface AWEIMSilverWingLoadingTrackComponent : AWEIMComponentBase <AWEIMSilverWingLoadingTrackInterface>

@property (retain, nonatomic) NSMutableDictionary *responseMsgStartTimeMap;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)componentDidMounted:(id)a0;
- (void).cxx_destruct;

@end
