@class FinderLiveStickerFont, NSMutableArray, FinderLiveStickerBubble;

@interface FinderLiveSyncResourceLoadInfoResp : WXPBGeneratedMessage

@property (nonatomic) unsigned int resourceLoadFlag;
@property (retain, nonatomic) NSMutableArray *gestureList;
@property (retain, nonatomic) FinderLiveStickerBubble *stickerBubble;
@property (retain, nonatomic) FinderLiveStickerFont *stickerFont;

+ (void)initialize;

@end
