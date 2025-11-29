@class NSDictionary, LLDitoPageModel;

@interface LLDitoDataCacheItem : NSObject

@property (retain, nonatomic) LLDitoPageModel *model;
@property (retain, nonatomic) NSDictionary *extraParams;

- (void).cxx_destruct;

@end
