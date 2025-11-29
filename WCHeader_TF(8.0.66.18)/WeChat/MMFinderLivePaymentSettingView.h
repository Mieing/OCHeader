@class MMTableView, OrderedDictionary, MMFinderLivePaymentSettingInputView, NSString, UIView, MMUIButton, MMUILabel;
@protocol MMFinderLivePaymentSettingViewDelegate;

@interface MMFinderLivePaymentSettingView : MMPageSheetBaseView <UIGestureRecognizerDelegate, UITableViewDelegate, UITableViewDataSource, MMFinderLivePaymentSettingInputViewDelegate>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) MMUIButton *closeButton;
@property (retain, nonatomic) MMUILabel *titleLabel;
@property (retain, nonatomic) MMTableView *priceInWecoinTableView;
@property (retain, nonatomic) OrderedDictionary *priceInWecoinOptions;
@property (nonatomic) unsigned int chargeUnitPriceInWecoin;
@property (nonatomic) unsigned int curPriceInWecoin;
@property (retain, nonatomic) MMFinderLivePaymentSettingInputView *inputView;
@property (nonatomic) BOOL forceDarkMode;
@property (weak, nonatomic) id<MMFinderLivePaymentSettingViewDelegate> operationDelegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithCurPriceInWecoin:(unsigned int)a0 forceDarkMode:(BOOL)a1;
- (void)dealloc;
- (void)registerExtension;
- (void)unRegisterExtension;
- (void)initDefaultData;
- (void)initUI;
- (void)layoutUI;
- (void)layoutSubviews;
- (double)contentViewHeight;
- (void)setExtraCellLineHidden:(id)a0;
- (id)getColorProxy;
- (void)showWithAnimated:(BOOL)a0;
- (void)dismissWithAnimated:(BOOL)a0;
- (void)onInputPriceInWecoin:(unsigned int)a0;
- (long long)numberOfSectionsInTableView:(id)a0;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (void)tableView:(id)a0 didSelectRowAtIndexPath:(id)a1;
- (void)closeAction;
- (void)pageSheetDidCloseWithType:(long long)a0;
- (void).cxx_destruct;

@end
