@class NSString;
@protocol AWEBDXPopupShrinkVideoHelper;

@interface AWEFeedTemplateAnchorHamletConfig : AWEFeedTemplateAnchorBaseConfig <AWEBDXPopupShrinkVideoHelperDelegate>

@property (retain, nonatomic) id<AWEBDXPopupShrinkVideoHelper> bdxPopupHelper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)enableTrackForHamlet;

- (void)handlerTemplateAnchorViewClicked;
- (BOOL)tryOpenBulletPopup:(id)a0;
- (void)popupWillShow:(id)a0;
- (void)popupWillDismiss:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
