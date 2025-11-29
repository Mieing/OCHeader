@class NSString, IESECCommentListKitMediasModel, IESECCommentMediaSectionLayout;

@interface IESECCommentMediaSectionController : IESECCommentSectionController <IGListSupplementaryViewSource>

@property (retain, nonatomic) IESECCommentListKitMediasModel *model;
@property (retain, nonatomic) IESECCommentMediaSectionLayout *sectionLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)cellForItemAtIndex:(long long)a0;
- (id)supportedElementKinds;
- (id)viewForSupplementaryElementOfKind:(id)a0 atIndex:(long long)a1;
- (struct CGSize { double x0; double x1; })sizeForSupplementaryViewOfKind:(id)a0 atIndex:(long long)a1;
- (void)didUpdateToObject:(id)a0;
- (id)supplementaryViewSource;
- (long long)numberOfItems;
- (void).cxx_destruct;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0;

@end
