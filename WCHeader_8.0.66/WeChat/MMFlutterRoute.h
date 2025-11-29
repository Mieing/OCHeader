@class NSString, NSDictionary, NSNumber;

@interface MMFlutterRoute : NSObject

@property (retain, nonatomic) NSString *entry;
@property (retain, nonatomic) NSString *plugin;
@property (retain, nonatomic) NSString *route;
@property (retain, nonatomic) NSDictionary *params;
@property (retain, nonatomic) NSString *engineId;
@property (retain, nonatomic) NSString *paramsKey;
@property (nonatomic) BOOL needGeneratedPlugin;
@property (retain, nonatomic) NSString *routeJson;
@property (copy, nonatomic) NSNumber *sharedIsolateMode;

+ (id)getEmojiParams;

- (id)initWithPlugin:(id)a0;
- (id)initWithPlugin:(id)a0 route:(id)a1;
- (id)initWithPlugin:(id)a0 route:(id)a1 params:(id)a2;
- (id)getRoute;
- (id)getRouteJson;
- (id)getParamsJson;
- (void).cxx_destruct;

@end
