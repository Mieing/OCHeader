@class NSString, FinderJumpInfo_LiteApp;

@interface FinderLiveShopTagInfo : WXPBGeneratedMessage

@property (nonatomic) unsigned int anchorShopTag;
@property (retain, nonatomic) NSString *anchorShopTagUrl;
@property (retain, nonatomic) FinderJumpInfo_LiteApp *liteAppInfo;
@property (retain, nonatomic) NSString *liveShareCardUrl;

+ (void)initialize;

- (void)setLiveShareCardUrl:(id)a0;
- (id)liveShareCardUrl;
- (void)setLiteAppInfo:(id)a0;
- (id)liteAppInfo;
- (void)setAnchorShopTagUrl:(id)a0;
- (id)anchorShopTagUrl;
- (void)setAnchorShopTag:(unsigned int)a0;
- (unsigned int)anchorShopTag;

@end
