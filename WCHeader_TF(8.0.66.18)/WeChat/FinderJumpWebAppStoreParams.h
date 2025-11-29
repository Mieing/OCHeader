@class NSString, FinderJumpWebAppStoreParams_FinderJumpSKAdItem;

@interface FinderJumpWebAppStoreParams : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *installSchemeUrl;
@property (nonatomic) int installAction;
@property (retain, nonatomic) NSString *uxinfo;
@property (retain, nonatomic) NSString *extraData;
@property (retain, nonatomic) FinderJumpWebAppStoreParams_FinderJumpSKAdItem *skAdItem;

+ (void)initialize;

@end
