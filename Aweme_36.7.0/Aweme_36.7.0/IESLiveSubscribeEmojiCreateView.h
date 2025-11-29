@class UIView, NSString, HTSLiveEmojiTemplateGetResponse_Data, IESLiveEmojiTextField, UIImageView, UIButton, NSMutableArray, UILabel, UIScrollView;
@protocol IESLiveCompoundSubscription, IESLiveSubscribeEmojiCreateViewdelagate;

@interface IESLiveSubscribeEmojiCreateView : UIView <UITextFieldDelegate, UIScrollViewDelegate>

@property (retain, nonatomic) UIView *topBarView;
@property (retain, nonatomic) UIView *dividingLineTopView;
@property (retain, nonatomic) UIView *avatorView;
@property (retain, nonatomic) UIView *recommendationView;
@property (retain, nonatomic) UILabel *titileLabel;
@property (retain, nonatomic) UILabel *previewLabel;
@property (retain, nonatomic) UILabel *avatorLabel;
@property (retain, nonatomic) UILabel *avatorDefaultLabel;
@property (retain, nonatomic) UILabel *copywritingLabel;
@property (retain, nonatomic) UILabel *wordCountLabel;
@property (retain, nonatomic) UILabel *recommendationLabel;
@property (retain, nonatomic) UILabel *bubbleLabel;
@property (retain, nonatomic) UIButton *cancelButton;
@property (retain, nonatomic) UIButton *confirmButton;
@property (retain, nonatomic) UIButton *avatorButton;
@property (retain, nonatomic) UIButton *descriptionButton;
@property (retain, nonatomic) NSMutableArray *recommendationBtnArray;
@property (retain, nonatomic) NSMutableArray *bubbleButtonArray;
@property (retain, nonatomic) UIImageView *avatorImageView;
@property (retain, nonatomic) UIImageView *defaultPreview;
@property (retain, nonatomic) UIImageView *gradientView;
@property (retain, nonatomic) UIScrollView *scrollView;
@property (retain, nonatomic) HTSLiveEmojiTemplateGetResponse_Data *model;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (nonatomic) BOOL isFromRoom;
@property (copy, nonatomic) NSString *colorStr;
@property (nonatomic) BOOL isMarkedText;
@property (retain, nonatomic) id<IESLiveCompoundSubscription> disposable;
@property (weak, nonatomic) id<IESLiveSubscribeEmojiCreateViewdelagate> delegate;
@property (retain, nonatomic) UIView *preview;
@property (nonatomic) long long bubbleIdx;
@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) IESLiveEmojiTextField *copywritingTextField;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateUIWithModel:(id)a0;
- (void)setUI;
- (void)bindAction;
- (void)p_addKeyboardObserver;
- (void)onTapped;
- (id)disable_emoji:(id)a0;
- (void)textFieldEditChange:(id)a0;
- (void)p_showTipsWhenReachMax:(id)a0;
- (void)showAvatorImageViewWith:(id)a0;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 isFromRoom:(BOOL)a1 completion:(id /* block */)a2;
- (void)loadRecommendationBtns;
- (void)loadbubbleBtns;
- (id)createRecommendationButtonWithIdx:(unsigned long long)a0;
- (id)createBubbleButtonWithIdx:(unsigned long long)a0;
- (void)tapDescriptionButton;
- (void)trackLivevipSampleEmojiWordEdit;
- (BOOL)hasEmoji:(id)a0;
- (void).cxx_destruct;
- (void)keyboardWillShow:(id)a0;
- (BOOL)textFieldShouldReturn:(id)a0;
- (void)keyboardWillHide:(id)a0;
- (void)dealloc;
- (void)cancel;
- (void)confirm;

@end
