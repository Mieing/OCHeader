@class NSString, NSDictionary;

@interface QDataLayerConfigData : NSObject

@property (readonly, nonatomic) BOOL enable;
@property (readonly, nonatomic) NSString *url;
@property (readonly, nonatomic) NSDictionary *layers;

- (id)initWithJSON:(id)a0;
- (id)getAllConfigNames;
- (id)getConfigByID:(id)a0;
- (void).cxx_destruct;

@end
