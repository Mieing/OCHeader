@class MMFinderLiveWebPageSheetParams, MMPageSheetAdapter;

@interface MMFinderLiveWebPageSheetCacheInfo : NSObject

@property (retain, nonatomic) MMPageSheetAdapter *adpater;
@property (nonatomic) unsigned int cacheTsSec;
@property (retain, nonatomic) MMFinderLiveWebPageSheetParams *params;

- (id)initWithPageSheet:(id)a0 cacheTsSec:(unsigned int)a1 params:(id)a2;
- (void).cxx_destruct;

@end
