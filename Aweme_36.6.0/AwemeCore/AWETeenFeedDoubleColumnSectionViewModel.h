@class NSCache, AWETeenHotListDataController;

@interface AWETeenFeedDoubleColumnSectionViewModel : AWEBaseListSectionViewModel

@property (retain, nonatomic) NSCache *itemSizeCache;
@property (retain, nonatomic) AWETeenHotListDataController *dataController;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } inset;

- (void).cxx_destruct;

@end
