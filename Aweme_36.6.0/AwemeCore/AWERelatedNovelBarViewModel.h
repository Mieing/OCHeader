@class AWERelatedNovelBarPopupAttractionModel, NSString;

@interface AWERelatedNovelBarViewModel : AWETemplateBaseViewModel

@property (retain, nonatomic) AWERelatedNovelBarPopupAttractionModel *attractionModel;
@property (retain, nonatomic) NSString *appID;
@property (nonatomic) long long position;

+ (BOOL)shouldActiveWithData:(id)a0 scene:(unsigned long long)a1 context:(id)a2;
+ (BOOL)shouldAvoidOtherElementWithData:(id)a0 barModel:(id)a1 context:(id)a2 scene:(unsigned long long)a3 extraInfo:(id)a4;
+ (BOOL)isTomatoNovelInstall;

- (id)commonParams;
- (void)viewDidTriggerAction:(unsigned long long)a0;
- (void)trackForTemplateViewShow;
- (void)trackForTemplateViewClick;
- (id)getTrackerPrams;
- (BOOL)canShowSubContent;
- (id)popupTrackParams;
- (void)jumpToLandingPage;
- (void)openAppWithSchema:(id)a0 cert:(id)a1;
- (void)jumpToTomatoApp;
- (void)preprocessBarModel;
- (void)openAppAction;
- (void).cxx_destruct;
- (void)closeAction;

@end
