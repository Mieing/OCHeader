@class NSDictionary;

@interface QCustomLayerConfigData : NSObject

@property (readonly, nonatomic) BOOL enable;
@property (readonly, nonatomic) NSDictionary *layers;

- (id)initWithJSON:(id)a0;
- (id)getConfigByID:(id)a0;
- (id)getAllConfigNames;
- (void).cxx_destruct;

@end
