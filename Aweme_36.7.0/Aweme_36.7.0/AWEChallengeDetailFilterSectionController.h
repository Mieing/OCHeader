@class AWEChallengeDetailFilterCell, NSString;
@protocol AWEChallengeDetailFilterSectionControllerDelegate;

@interface AWEChallengeDetailFilterSectionController : AWEBaseListSectionController <AWEChallengeDetailFilterCellDelegate>

@property (nonatomic) double sectionHeight;
@property (retain, nonatomic) AWEChallengeDetailFilterCell *staticFilterCell;
@property (weak, nonatomic) id<AWEChallengeDetailFilterSectionControllerDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)cellClassForModel:(id)a0 index:(long long)a1;
- (void)didBindSectionViewModel;
- (void)updateContentAlpha:(double)a0;
- (void)didChangeSortType:(unsigned long long)a0;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (BOOL)showSeparator;
- (id)sectionBackgroundColor;

@end
