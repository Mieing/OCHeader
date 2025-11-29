@class CleanBtn, NSString, MMUIView, MMUILabel;

@interface MMFavoritesShowSpaceViewController : MMPageSheetBaseViewController <MMPageSheetBottomViewDelegate> {
    CleanBtn *m_cleanSpaceBtn;
    MMUILabel *m_warningLabel;
    MMUIView *m_cleanBtnlineTop;
    MMUIView *m_cleanBtnlineBottom;
    MMUIView *m_cubeline;
    NSString *m_sessionId;
}

@property (retain, nonatomic) MMUILabel *capcityInfo;
@property (retain, nonatomic) MMUIView *mainView;
@property (retain, nonatomic) MMUIView *used;
@property (nonatomic) int bannerType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)init;
- (id)initWithWarningType:(int)a0;
- (void)viewDidLoad;
- (int)getCapcityReportStatus;
- (void)goToCapcityView;
- (void)didClickAtCloseButton;
- (void)viewWillAppear:(BOOL)a0;
- (void).cxx_destruct;

@end
