@class NSString, UIImageView, UIView, AWELiveStickerCardViewModel, UITableView;
@protocol AWELiveStickerCardVCDelegate;

@interface AWELiveStickerCardViewController : UIViewController <UITableViewDelegate, UITableViewDataSource, AWELiveStickerCardVC>

@property (retain, nonatomic) AWELiveStickerCardViewModel *viewModel;
@property (nonatomic) BOOL foldComponent;
@property (nonatomic) BOOL needResetFold;
@property (copy, nonatomic) NSString *cardId;
@property (retain, nonatomic) UIView *actionContainer;
@property (retain, nonatomic) UIImageView *smallImgView;
@property (retain, nonatomic) UIImageView *titleImgView;
@property (retain, nonatomic) UIImageView *indicatorImgView;
@property (retain, nonatomic) UITableView *detailTableView;
@property (retain, nonatomic) UIView *detailAccessView;
@property (weak, nonatomic) id<AWELiveStickerCardVCDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configData;
- (void)updateCardViewWithModel:(id)a0 originCardData:(id)a1;
- (void)addStickerCardViewOnContainer:(id)a0 parentVC:(id)a1;
- (void)trackerStickerUpdate;
- (void)resetStickerCardId;
- (void)removeStickerCardViewFromContainer;
- (void)configAccessibilityData;
- (id)initWithCardModel:(id)a0 awemeModel:(id)a1 originCardData:(id)a2;
- (void)updateCurrentStickerSize;
- (void)componentOnClick;
- (void).cxx_destruct;
- (void)viewDidLayoutSubviews;
- (id)tableView:(id)a0 cellForRowAtIndexPath:(id)a1;
- (long long)tableView:(id)a0 numberOfRowsInSection:(long long)a1;
- (double)tableView:(id)a0 heightForRowAtIndexPath:(id)a1;
- (void)viewDidLoad;
- (void)viewDidAppear:(BOOL)a0;
- (void)setupUI;
- (struct CGSize { double x0; double x1; })componentSize;

@end
