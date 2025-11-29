@class MMUIActivityIndicatorView, UIImageView, NSString, UILabel, UIButton;

@interface DeepCleanProgressHalfScreenView : MMPageSheetBaseView <IDeepCleanClassExt>

@property (nonatomic) unsigned long long dataSize;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UILabel *tipLabel;
@property (retain, nonatomic) UILabel *linkLabel;
@property (retain, nonatomic) UIButton *stopButton;
@property (retain, nonatomic) MMUIActivityIndicatorView *loadingView;
@property (retain, nonatomic) UIImageView *finishIconView;
@property (copy, nonatomic) NSString *processTitle;
@property (copy, nonatomic) NSString *processTip;
@property (copy, nonatomic) NSString *cancellingTitle;
@property (copy, nonatomic) NSString *cancelledTitle;
@property (copy, nonatomic) NSString *finishTitle;
@property (copy, nonatomic) NSString *finishTip;
@property (nonatomic) float currentProgress;
@property (nonatomic) BOOL cancelled;
@property (copy, nonatomic) id /* block */ deleteLogic;
@property (copy, nonatomic) id /* block */ stopLogic;
@property (copy, nonatomic) id /* block */ doneLogic;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithDataSize:(unsigned long long)a0 deleteLogic:(id /* block */)a1 stopLogic:(id /* block */)a2 doneLogic:(id /* block */)a3 processTitle:(id)a4 processTip:(id)a5 cancellingTitle:(id)a6 cancelledTitle:(id)a7 finishTitle:(id)a8 finishTip:(id)a9;
- (void)startDeleteLogic;
- (void)onDeepClean:(id)a0 progressChange:(float)a1;
- (void)onDeepCleanStop:(id)a0;
- (double)bottomViewBottomMargin;
- (id)p_getTitleAttributeString:(id)a0;
- (id)p_getTipAttributeString:(id)a0;
- (void)updateView;
- (void)setupDetailView;
- (void)onTapStopDeleteButton;
- (void).cxx_destruct;

@end
