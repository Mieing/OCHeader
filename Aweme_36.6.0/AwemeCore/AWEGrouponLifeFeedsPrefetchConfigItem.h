@class NSArray, NSDictionary;

@interface AWEGrouponLifeFeedsPrefetchConfigItem : NSObject

@property (copy, nonatomic) NSArray *schemaList;
@property (nonatomic) BOOL enablePrefetchData;
@property (nonatomic) BOOL enablePreloadContainer;
@property (copy, nonatomic) NSDictionary *lifeMallExtraParams;

- (BOOL)matchSchema:(id)a0;
- (void).cxx_destruct;

@end
