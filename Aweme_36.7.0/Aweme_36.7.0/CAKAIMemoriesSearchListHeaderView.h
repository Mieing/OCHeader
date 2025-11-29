@class CAKAlbumSearchListCollectionSectionCell, CAKAIMemoriesSearchListHeaderLoadingView, NSString, UIView, DUXBaseLabel;
@protocol CAKAIMemoriesSearchListHeaderViewDelegate;

@interface CAKAIMemoriesSearchListHeaderView : UIView <CAKAlbumSearchListCollectionSectionCellDelegate>

@property (retain, nonatomic) CAKAIMemoriesSearchListHeaderLoadingView *loadingView;
@property (retain, nonatomic) UIView *collectionSectionContainerView;
@property (retain, nonatomic) CAKAlbumSearchListCollectionSectionCell *collectionSection;
@property (retain, nonatomic) DUXBaseLabel *tilteLabel;
@property (copy, nonatomic) NSString *keyword;
@property (weak, nonatomic) id<CAKAIMemoriesSearchListHeaderViewDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (double)headerCollectionHeight;
+ (double)headerHeight;

- (void)sectionCell:(id)a0 didSelectItem:(id)a1 index:(long long)a2;
- (void)sectionCell:(id)a0 willDisplayItem:(id)a1 index:(long long)a2;
- (void)sectionCellDidClickSubmitButton:(id)a0;
- (void)triggerForwardLoadingWithCount:(long long)a0;
- (void).cxx_destruct;
- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0;
- (void)showLoadingView;
- (void)showCollectionView;

@end
