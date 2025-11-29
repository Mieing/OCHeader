@class AWEURLModel;

@interface AWEMiscDownloadAddrs : AWEBaseApiModel

@property (retain, nonatomic) AWEURLModel *snapchat;
@property (retain, nonatomic) AWEURLModel *lite;
@property (retain, nonatomic) AWEURLModel *suffixScene;

+ (id)snapchatJSONTransformer;
+ (id)liteJSONTransformer;
+ (id)suffixSceneJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
