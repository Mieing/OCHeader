@class NSString, AWEIMPickerConfiguration;

@interface AWEIMPickerTrackComponent : AWEIMComponentBase <AWEIMPickerTrackService>

@property (retain, nonatomic) AWEIMPickerConfiguration *config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)trackEvent:(id)a0 params:(id)a1;
- (void)componentDidMounted:(id)a0;
- (void).cxx_destruct;

@end
