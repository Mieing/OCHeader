@class NSString;

@interface AWEProfileHeaderProfileRecommendSectionController : AWEBaseListSectionController <AWEProfileHeaderProfileRecommendCollectionViewCellDelegate>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (struct CGSize { double x0; double x1; })sizeForHeaderWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (struct CGSize { double x0; double x1; })sizeForFooterWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)trackForRelationReason;
- (id)recommendReasonShowText:(id)a0 needTrack:(BOOL)a1;
- (id)relationDescriptionAttachmentIconWithContext:(id)a0;
- (void)didTapProfileRecommendView;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (BOOL)showSeparator;
- (Class)cellClass;

@end
