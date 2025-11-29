@class NSString, NSArray, NSDictionary;

@interface QDataLayerConfigItem : NSObject

@property (readonly, nonatomic) NSString *layerid;
@property (readonly, nonatomic) NSString *url;
@property (readonly, nonatomic) NSString *cfg_ver;
@property (readonly, nonatomic) NSString *data_ver;
@property (readonly, nonatomic) NSArray *params;
@property (readonly, nonatomic) NSDictionary *originJSON;

- (id)initWithJSON:(id)a0;
- (void).cxx_destruct;

@end
