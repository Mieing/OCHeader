@class NSString;

@interface FavoritesDataItemSource : FavoritesModel

@property (nonatomic) int sourceType;
@property (retain, nonatomic) NSString *sourceId;
@property (retain, nonatomic) NSString *fromUsr;
@property (retain, nonatomic) NSString *toUsr;
@property (retain, nonatomic) NSString *realChatName;
@property (retain, nonatomic) NSString *hashUserName;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *brandId;
@property (retain, nonatomic) NSString *link;

+ (id)xmlAttributePropertylistForConfigTag:(id)a0;
+ (id)modelPropertyBlacklistForConfigTag:(id)a0;

- (void).cxx_destruct;

@end
