@class NSString, UICollectionViewCell;

@interface AFDHorizontalSimilarChallengeSectionController : AWEBaseListSectionController <AFDHorizontalSimilarChallengeSectionControllerProtocol>

@property (retain, nonatomic) UICollectionViewCell *cellView;
@property (nonatomic) double sectionHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)cellClassForModel:(id)a0 index:(long long)a1;
- (void)updateContentAlpha:(double)a0;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (BOOL)showSeparator;
- (id)sectionBackgroundColor;

@end
