@class BDXResourceModel, NSString, BDXSchemaParam, NSDictionary, IESForestKit;

@interface BDXForestKitPreloadParameter : NSObject

@property (copy, nonatomic) NSString *mainUrl;
@property (nonatomic) BOOL isLynx;
@property (nonatomic) BOOL isFromAnnieX;
@property (nonatomic) BOOL enableSSR;
@property (retain, nonatomic) BDXResourceModel *resourceModel;
@property (copy, nonatomic) NSString *accessKey;
@property (copy, nonatomic) NSString *containerMonitorId;
@property (copy, nonatomic) NSString *ua;
@property (retain, nonatomic) BDXSchemaParam *schemaParams;
@property (nonatomic) BOOL isTTNetEnabledOriginally;
@property (copy, nonatomic) NSDictionary *additionalRequestHeaderFields;
@property (retain, nonatomic) IESForestKit *forestKit;

- (void).cxx_destruct;

@end
