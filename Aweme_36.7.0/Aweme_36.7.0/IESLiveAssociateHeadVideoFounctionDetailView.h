@class IESLiveAssociateHeadVideoFoundationDetailViewModel, NSString, UICollectionView, IGListAdapter, UILabel, UIView, UIButton;

@interface IESLiveAssociateHeadVideoFounctionDetailView : UIView <UICollectionViewDelegate, UITextViewDelegate, IGListAdapterDataSource>

@property (retain, nonatomic) UIView *contentView;
@property (retain, nonatomic) UILabel *titleLabel;
@property (retain, nonatomic) UIButton *backIcon;
@property (retain, nonatomic) UIView *lineDescLabel;
@property (retain, nonatomic) UIView *bottomView;
@property (retain, nonatomic) UILabel *desLabel;
@property (retain, nonatomic) UIButton *actionButton;
@property (retain, nonatomic) UICollectionView *collectionView;
@property (retain, nonatomic) IGListAdapter *listAdapter;
@property (retain, nonatomic) IESLiveAssociateHeadVideoFoundationDetailViewModel *viewModel;
@property (nonatomic) BOOL firstShow;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)actionButtonClicked:(id)a0;
- (id)objectsForListAdapter:(id)a0;
- (id)listAdapter:(id)a0 sectionControllerForObject:(id)a1;
- (id)emptyViewForListAdapter:(id)a0;
- (void)trackEvent:(id)a0 isFirstShow:(BOOL)a1;
- (void)tapBackIcon;
- (id)initWithViewModel:(id)a0 isFirst:(BOOL)a1;
- (void)showWithItemData:(BOOL)a0;
- (void).cxx_destruct;
- (void)setupUI;
- (void)setupSubviews;

@end
