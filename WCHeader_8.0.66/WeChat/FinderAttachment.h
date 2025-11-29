@class FinderVideoAttachment, FinderMiniAppAttachment, FinderJumpInfoAttachment;

@interface FinderAttachment : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) FinderVideoAttachment *video;
@property (retain, nonatomic) FinderMiniAppAttachment *miniApp;
@property (retain, nonatomic) FinderJumpInfoAttachment *jumpInfo;

+ (void)initialize;

@end
