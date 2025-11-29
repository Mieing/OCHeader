@class ExtendedImageView, NSString, UIImageView, UILabel;
@protocol AWESearchHomeNewStyleTopContainerViewDelegate;

@interface AWESearchHomeNewStyleHistoryContainerView : UIView <AWESearchHomeNewStyleTopContainerElementProtocol>

@property (retain, nonatomic) UIImageView *leftImageView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (retain, nonatomic) ExtendedImageView *deleteImageView;
@property (nonatomic) BOOL isDeleted;
@property (nonatomic) BOOL hasHidden;
@property (nonatomic) BOOL isSendingQuery;
@property (weak, nonatomic) id<AWESearchHomeNewStyleTopContainerViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateTheme:(unsigned long long)a0;
- (id)commomTrackParams;
- (void)sendQuery:(id)a0;
- (id)currentTextView;
- (void)handleContainerTap;
- (void)handleArrowTap;
- (void)addTapForView:(id)a0 action:(SEL)a1;
- (void)handleDeleteIconTap;
- (void)trackContainerTap:(id)a0;
- (void)trackWordsInsert;
- (void)trackWordsShow;
- (void)willUpdateContainer;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)inputViewWillAppear;
- (BOOL)shouldShow;
- (void)setupSubviews;
- (double)elementHeight;
- (void)setupGestures;
- (void)setupLayout;

@end
