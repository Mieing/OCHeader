@class NSMutableDictionary;

@interface MMFinderLiveWebPageSheetContainerCache : NSObject

@property (retain, nonatomic) NSMutableDictionary *items;

+ (id)itemKeyWithPageSheetParams:(id)a0;

- (id)init;
- (void)addContainer:(id)a0 withPageSheetParams:(id)a1;
- (void)removeContainerWithPageSheetParams:(id)a0;
- (id)containerWithPageSheetParams:(id)a0;
- (void).cxx_destruct;

@end
