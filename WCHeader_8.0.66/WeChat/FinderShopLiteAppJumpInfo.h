@class NSString;

@interface FinderShopLiteAppJumpInfo : WXPBGeneratedMessage <WCFinderLiteAppInfoProvider>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) NSString *path;
@property (retain, nonatomic) NSString *query;
@property (retain, nonatomic) NSString *defaultUrl;

+ (void)initialize;

- (id)genFinderLiteAppInfo;

@end
