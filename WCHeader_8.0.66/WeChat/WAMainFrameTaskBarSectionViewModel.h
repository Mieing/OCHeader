@class NSMutableArray;

@interface WAMainFrameTaskBarSectionViewModel : NSObject {
    NSMutableArray *_items;
}

- (void)fillItems:(id)a0;
- (id)dataForIndex:(long long)a0;
- (id)itemsCopy;
- (long long)count;
- (long long)allCount;
- (id)deleteDataForIndex:(long long)a0;
- (void).cxx_destruct;

@end
