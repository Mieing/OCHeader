@class UIStackView, AFDRichAwemeDetailBottomBarItem, AWEAwemeModel, UIView, NSAttributedString, NSString, NSDictionary, NSObject, YYLabel;
@protocol AWEAwemePlayInteractionInteractorProtocol;

@interface AFDRichAwemeDetailBottomBar : UIView <AFDRichAwemeDetailBottomBarProtocol>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) id /* block */ inputViewClickedBlock;
@property (retain, nonatomic) UIView *inputView;
@property (retain, nonatomic) YYLabel *inputLabel;
@property (retain, nonatomic) UIView *containerView;
@property (copy, nonatomic) NSAttributedString *attributedCommentString;
@property (nonatomic) BOOL isInFullPage;
@property (retain, nonatomic) UIStackView *actionButtonStackView;
@property (retain, nonatomic) AFDRichAwemeDetailBottomBarItem *digItem;
@property (retain, nonatomic) AFDRichAwemeDetailBottomBarItem *favItem;
@property (retain, nonatomic) AFDRichAwemeDetailBottomBarItem *shareItem;
@property (retain, nonatomic) AFDRichAwemeDetailBottomBarItem *commentItem;
@property (retain, nonatomic) NSObject<AWEAwemePlayInteractionInteractorProtocol> *interactor;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *fromPage;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (copy, nonatomic) id /* block */ clickShareItemBlock;
@property (copy, nonatomic) id /* block */ clickCommentItemBlock;
@property (copy, nonatomic) id /* block */ sharePanelDismissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)isFromSearch;
- (void)setupObserve;
- (id)search_params;
- (id)initWithAwemeModel:(id)a0 isInFullPage:(BOOL)a1 inputViewClickBlock:(id /* block */)a2;
- (void)makeBarItems;
- (void)updateFavItem;
- (void)updateShareItem;
- (void)updateDigItem;
- (void)updateCommentItem;
- (id)digCountString;
- (void)didClickDig;
- (id)favCountString;
- (void)didClickFavorite;
- (id)shareCountString;
- (id)commentCountString;
- (void)updateInputLabel;
- (void)didClickInputView;
- (id)fromPageParam;
- (void)updateCommentString:(id)a0;
- (void)updateBarItems;
- (id)initWithAwemeModel:(id)a0 inputViewClickBlock:(id /* block */)a1;
- (void)setupTransmissionPreDataNode:(id)a0;
- (void).cxx_destruct;
- (void)didMoveToSuperview;
- (void)dealloc;
- (id)stringFromNumber:(id)a0;
- (void)setupUI;

@end
