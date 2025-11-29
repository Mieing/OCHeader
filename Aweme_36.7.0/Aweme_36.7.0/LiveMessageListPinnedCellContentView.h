@class UIView, NSString, NSArray, UIImageView, LiveMessageListPinnedAnnouncementView, MASConstraint, HTSLiveMessageListNode, UICollectionView, UILabel;

@interface LiveMessageListPinnedCellContentView : UIView <UICollectionViewDelegate, UICollectionViewDataSource, IESLabelCollectionViewLayoutDataSource, HTSLivePluginLayoutView>

@property (weak, nonatomic) UIView *bgView;
@property (weak, nonatomic) UIImageView *iconImageView;
@property (weak, nonatomic) UICollectionView *labelCollectionView;
@property (weak, nonatomic) UILabel *stringLabel;
@property (retain, nonatomic) UIImageView *tipsIcon;
@property (retain, nonatomic) UILabel *tipsLabel;
@property (retain, nonatomic) NSArray *titleArray;
@property (retain, nonatomic) MASConstraint *stringLabelBottomConstraint;
@property (retain, nonatomic) HTSLiveMessageListNode *node;
@property (nonatomic) double scale;
@property (retain, nonatomic) LiveMessageListPinnedAnnouncementView *announcementView;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)heightForNode:(id)a0;

- (struct CGSize { double x0; double x1; })pluginLayoutContentSize;
- (struct UIEdgeInsets { double x0; double x1; double x2; double x3; })pluginLayoutContentInsets;
- (void)refreshWith:(id)a0;
- (void)attachTipsView;
- (BOOL)isAnchor:(id)a0;
- (void)attachTipsWithIcon;
- (BOOL)shouldShowAnnouncementEntry:(id)a0;
- (void)refreshAnnouncementViewWith:(id)a0;
- (void)refreshConstraintsWithMaxLayoutWidth:(double)a0;
- (struct CGSize { double x0; double x1; })collectionViewLayout:(id)a0 sizeForItemAtIndexPath:(id)a1;
- (void)collectionViewLayout:(id)a0 validateContentSize:(struct CGSize { double x0; double x1; })a1;
- (long long)numberOfLineInSection:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (id)collectionView:(id)a0 cellForItemAtIndexPath:(id)a1;
- (long long)collectionView:(id)a0 numberOfItemsInSection:(long long)a1;
- (id)viewType;
- (void)loadView;

@end
