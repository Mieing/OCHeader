@class NSString, AWESinglePayEpisodeDiversionXiguaSchemaParam, AWEURLModel;

@interface AWESinglePayEpisodeDiversionXiguaModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL enable;
@property (nonatomic) BOOL xiguaOldUser;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *installedText;
@property (copy, nonatomic) NSString *uninstalledText;
@property (retain, nonatomic) AWEURLModel *coverUrl;
@property (retain, nonatomic) AWEURLModel *backgroundUrl;
@property (retain, nonatomic) AWESinglePayEpisodeDiversionXiguaSchemaParam *schemaParam;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
