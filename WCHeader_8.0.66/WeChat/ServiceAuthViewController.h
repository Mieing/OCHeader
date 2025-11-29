@class NSString, NSMutableDictionary, ServiceAuthExtBlockWrapper, ServiceAuthConfig;
@protocol ServiceAuthExt, ServiceAuthDelegate;

@interface ServiceAuthViewController : MMPageSheetBaseViewController <MMPageSheetBottomViewDelegate, ILinkEventExt> {
    NSMutableDictionary *m_dictToLink;
}

@property (retain, nonatomic) ServiceAuthConfig *config;
@property (weak, nonatomic) id<ServiceAuthDelegate> delegate;
@property (weak, nonatomic) id<ServiceAuthExt> notifyDelegate;
@property (retain, nonatomic) ServiceAuthExtBlockWrapper *notifyBlockWrapper;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithConfig:(id)a0;
- (void)initDetailView;
- (void)viewDidLoad;
- (id)titleForPageSheetCancelButton;
- (id)colorForPageSheetCancelButton;
- (id)titleForPageSheetConfirmButton;
- (id)colorForPageSheetConfirmButton;
- (long long)numberOfLinesForPageSheetConfirmButton;
- (void)onClickPageSheetCancelButton;
- (void)onClickPageSheetConfirmButton;
- (void)onLinkClicked:(id)a0 withRect:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (void).cxx_destruct;

@end
