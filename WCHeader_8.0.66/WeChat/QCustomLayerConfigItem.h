@class NSString, NSArray, NSDictionary;

@interface QCustomLayerConfigItem : NSObject

@property (readonly, nonatomic) NSString *layerid;
@property (readonly, nonatomic) NSString *url;
@property (readonly, nonatomic) NSString *version;
@property (readonly, nonatomic) NSArray *params;
@property (readonly, nonatomic) double zoom_max;
@property (readonly, nonatomic) double zoom_min;
@property (readonly, nonatomic) NSDictionary *originJSON;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;

@end
