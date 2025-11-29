@class NSString, IESLLLiveShelfPagingDataController;
@protocol IESLLLiveShelfListSectionControllerDelegate;

@interface IESLLLiveShelfListSectionController : AWEBaseListSectionController <AWEListSectionControllerDelegate>

@property (nonatomic) long long cardType;
@property (nonatomic) BOOL needUpdateVisibleIndexes;
@property (weak, nonatomic) IESLLLiveShelfPagingDataController *dataController;
@property (weak, nonatomic) id<IESLLLiveShelfListSectionControllerDelegate> delegate;
@property (nonatomic) BOOL needUpdateLayout;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)sectionWillDisplayCell:(id)a0 index:(long long)a1 model:(id)a2;
- (Class)cellClassForModel:(id)a0 index:(long long)a1;
- (void)sectionDidEndDisplayingCell:(id)a0 index:(long long)a1;
- (BOOL)shouldHighlightItemAtIndex:(long long)a0 model:(id)a1;
- (double)getCardItemHeightWith:(id)a0;
- (double)getGaiaXCardHeight:(id)a0;
- (void)configGaiaXCell:(id)a0 index:(long long)a1 model:(id)a2;
- (void)configLynxCell:(id)a0 index:(long long)a1 model:(id)a2;
- (void)configNativeCell:(id)a0 index:(long long)a1 model:(id)a2;
- (void)updateCurrentVisibleIndexesWith:(id)a0;
- (double)getTotalHeightWith:(id)a0;
- (void)configCell:(id)a0 index:(long long)a1 model:(id)a2;
- (struct CGSize { double x0; double x1; })sizeForItemAtIndex:(long long)a0 model:(id)a1 collectionViewSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (id)init;

@end
