@class CJPaySignCardInfo, NSString, CJPaySignCardView;
@protocol CJPayTrackerProtocol;

@interface CJPaySignCardPopUpViewController : CJPayPopUpBaseViewController

@property (retain, nonatomic) CJPaySignCardView *tipsView;
@property (retain, nonatomic) CJPaySignCardInfo *signCardInfoModel;
@property (weak, nonatomic) id<CJPayTrackerProtocol> trackDelegate;
@property (copy, nonatomic) id /* block */ confirmButtonClickBlock;
@property (copy, nonatomic) id /* block */ closeButtonClickBlock;
@property (copy, nonatomic) NSString *bankNameTitle;

- (void)p_closeButtonClick;
- (void)p_trackWithEvent:(id)a0 params:(id)a1;
- (void)p_confirmButtonClick;
- (id)initWithSignCardInfoModel:(id)a0;
- (void).cxx_destruct;
- (void)setupUI;

@end
