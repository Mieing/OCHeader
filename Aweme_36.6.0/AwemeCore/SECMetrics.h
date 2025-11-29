@class NSMutableDictionary;

@interface SECMetrics : NSObject

@property (retain, nonatomic) NSMutableDictionary *durations;

- (void)startAction:(id)a0;
- (void)endAction:(id)a0;
- (void)mergeMetrics:(id)a0;
- (void).cxx_destruct;
- (id)allItems;
- (id)init;
- (id)allMetrics;

@end
