@class NSDictionary, DitoPageModel;

@interface DitoDataCacheItem : NSObject

@property (retain, nonatomic) DitoPageModel *model;
@property (retain, nonatomic) NSDictionary *extraParams;

- (void).cxx_destruct;

@end
