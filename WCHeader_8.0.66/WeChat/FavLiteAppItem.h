@class NSString, NSArray;

@interface FavLiteAppItem : FavoritesModel

@property (nonatomic) long long subType;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *des;
@property (retain, nonatomic) NSString *nickName;
@property (nonatomic) unsigned int mediaType;
@property (retain, nonatomic) NSString *thumbUrl;
@property (nonatomic) unsigned int jumpType;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *query;
@property (retain, nonatomic) NSString *pagePath;
@property (retain, nonatomic) NSString *fallbackUrl;
@property (nonatomic) BOOL isTransparent;
@property (retain, nonatomic) NSArray *excerptList;
@property (nonatomic) BOOL forbidForward;

+ (id)modelCustomPropertyMapperForConfigTag:(id)a0;
+ (id)modelContainerPropertyMappingForConfigTag:(id)a0;

- (void).cxx_destruct;

@end
