@class NSString, AWEVideoHallPageContext;

@interface AWEVideoHallHotSectionController : AWELVideoAlbumBaseSectionController <AWEVideoHallSectionControllerProtocol>

@property (retain, nonatomic) AWEVideoHallPageContext *context;
@property (retain, nonatomic) id tracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sectionWillDisplayCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForHeaderWithCollectionViewSize:(struct CGSize { double x0; double x1; })a0;
- (void)configSupplementaryHeaderView:(id)a0;
- (Class)headerViewClass;

@end
