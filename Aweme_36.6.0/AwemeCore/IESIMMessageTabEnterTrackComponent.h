@class NSString;

@interface IESIMMessageTabEnterTrackComponent : AWEIMComponentBase <IESIMMessageTabEnterTrackInterface>

@property (copy, nonatomic) NSString *bizTrackDeepLinkFromString;
@property (copy, nonatomic) NSString *bizTrackTabFromString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)canCreateComponentWithContext:(id)a0;

- (void)componentDidMounted:(id)a0;
- (void)messageTabDidDisappear;
- (void)enterMessageTabFromWidgetWithContext:(id)a0;
- (id)tabPreviousPageString;
- (void).cxx_destruct;

@end
