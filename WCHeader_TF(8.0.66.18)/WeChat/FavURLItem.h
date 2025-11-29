@class NSString, NSArray, FavAppMsgShareItem;

@interface FavURLItem : FavoritesModel

@property (retain, nonatomic) NSString *link;
@property (retain, nonatomic) NSString *pageTitle;
@property (retain, nonatomic) NSString *pageDesc;
@property (retain, nonatomic) NSString *thumbUrl;
@property (retain, nonatomic) NSString *canvasPageXml;
@property (retain, nonatomic) NSString *wsVideoFlowXml;
@property (retain, nonatomic) FavAppMsgShareItem *appMsgShareItem;
@property (nonatomic) unsigned int forwardFlag;
@property (retain, nonatomic) NSArray *excerptList;
@property (retain, nonatomic) NSString *extraparam;

+ (id)modelPropertyBlacklistForConfigTag:(id)a0;
+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;
+ (id)modelContainerPropertyMappingForConfigTag:(id)a0;
+ (id)urlItemToXML:(id)a0;

- (void).cxx_destruct;

@end
