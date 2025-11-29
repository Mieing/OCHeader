@class AWEShowDataInjCacheMetaData;

@interface AWEShowDataInjCacheItem : NSObject

@property (retain, nonatomic) id object;
@property (nonatomic) double writeTime;
@property (retain, nonatomic) AWEShowDataInjCacheMetaData *metaData;

- (void).cxx_destruct;

@end
