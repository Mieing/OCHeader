@class NSString, NSDictionary;

@interface BDPLynxCardModel : BDPBasePluginModel

@property (copy, nonatomic) NSString *embedId;
@property (copy, nonatomic) NSString *schemaId;
@property (copy, nonatomic) NSString *schemaUrl;
@property (copy, nonatomic) NSString *containerId;
@property (copy, nonatomic) NSDictionary *globalProps;
@property (copy, nonatomic) NSDictionary *params;
@property (nonatomic) long long pageID;
@property (nonatomic) BOOL foregroundReRender;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
