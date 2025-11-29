@class AWEIMEmojiPackageAuthorView, AWEIMEmojiPackageHeader, AWEIMEmojiPackageDetailInfo, UIView, NSMutableArray, UITapGestureRecognizer;
@protocol AWEIMEmojiPackageDetailsHeaderDelegate;

@interface AWEIMEmojiPackageDetailsHeader : UICollectionReusableView

@property (retain, nonatomic) AWEIMEmojiPackageHeader *header;
@property (retain, nonatomic) UIView *separatorLine;
@property (retain, nonatomic) AWEIMEmojiPackageAuthorView *authorView;
@property (retain, nonatomic) NSMutableArray *authorArray;
@property (nonatomic) BOOL isSubscribe;
@property (retain, nonatomic) UITapGestureRecognizer *singeTapGesture;
@property (retain, nonatomic) AWEIMEmojiPackageDetailInfo *packageDetail;
@property (weak, nonatomic) id<AWEIMEmojiPackageDetailsHeaderDelegate> delegate;

- (void)__setupUIs;
- (void)__setupActions;
- (void)__refreshAddButtonUI;
- (BOOL)__containedInAuthorArray:(id)a0;
- (void)__didClickAdd;
- (void)__didTapAuthorView;
- (void)refreshPackageAddedState;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })getAddButtonFrameInHeader;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;

@end
