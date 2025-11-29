@class IESECWinContext, NSMutableDictionary, IESECServiceProxy, NSString, UIView, IESECListKitListModel;
@protocol IESECWinCategoryService, IESECWinTabService, IESECWinTabViewControllerManager;

@interface IESECWinFeedService : NSObject <IESECWinFeedService> {
    IESECWinContext *_context;
}

@property (retain, nonatomic) IESECServiceProxy<IESECWinTabService> *tabService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinCategoryService> *categoryService;
@property (retain, nonatomic) IESECServiceProxy<IESECWinTabViewControllerManager> *tabVCManager;
@property (retain, nonatomic) NSMutableDictionary *cardHeightMap;
@property (weak, nonatomic) UIView *targetBubbleView;
@property (nonatomic) BOOL showFilterGuideBubble;
@property (retain, nonatomic) IESECListKitListModel *updateListModel;
@property (nonatomic) long long transformState;
@property (nonatomic) long long listKitUpdateSection;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)hasSortCell;
- (long long)topCardsCount;
- (double)sortCellHeight;
- (void)setFilterGuideBubbleShowed:(id)a0;
- (BOOL)getFilterGuideBubbleShouldShow:(id)a0;
- (void)setProductCellHeight:(double)a0 withCacheKey:(id)a1;
- (double)getProductCellHeightWithCacheKey:(id)a0;
- (void)clearCellHeight;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
