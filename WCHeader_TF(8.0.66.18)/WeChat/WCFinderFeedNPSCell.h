@class CAGradientLayer, FinderNpsSurveyQuestion, WCFinderFeedContentVM, NPSFlutterVC;
@protocol WCFinderNpsSurveyContextInfoDelegate, WCFinderFeedNPSCellDelegate;

@interface WCFinderFeedNPSCell : WCFinderTableViewCell <WCFinderFocusCellProtocol>

@property (retain, nonatomic) WCFinderFeedContentVM *contentVM;
@property (retain, nonatomic) NPSFlutterVC *curNPSFlutterVC;
@property (retain, nonatomic) FinderNpsSurveyQuestion *curSurveyQuestion;
@property (nonatomic) long long curTriggerEvent;
@property (retain, nonatomic) CAGradientLayer *gradientLayer;
@property (weak, nonatomic) id<WCFinderFeedNPSCellDelegate> delegate;
@property (weak, nonatomic) id<WCFinderNpsSurveyContextInfoDelegate> npsDelegate;

- (id)initWithStyle:(long long)a0 reuseIdentifier:(id)a1;
- (void)layoutSubviews;
- (void)awakeFromNib;
- (void)prepareForReuse;
- (void)setSelected:(BOOL)a0 animated:(BOOL)a1;
- (void)updateWithContentVM:(id)a0;
- (void)willBeginDisplay:(long long)a0;
- (void)didEndDisplay:(long long)a0;
- (void)showNPSFlutterQuestion:(id)a0;
- (void)clickNPSQuestion:(id)a0 answer:(id)a1 inputText:(id)a2 mutliAnswerIDs:(id)a3;
- (void)doCompleteAction;
- (void)reportNPSWithReportType:(unsigned int)a0;
- (BOOL)shouldCaluculateAsFocusCell;
- (void)onClickNPSQuestion:(id)a0 answer:(id)a1 inputText:(id)a2 mutliAnswerIDs:(id)a3;
- (void)onCloseNPS;
- (void)superScrollViewDidScroll;
- (void).cxx_destruct;

@end
