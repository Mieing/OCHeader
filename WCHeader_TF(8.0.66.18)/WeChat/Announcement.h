@class NSString, FinderJumpInfo;

@interface Announcement : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *content;
@property (nonatomic) unsigned int activeTime;
@property (retain, nonatomic) FinderJumpInfo *jumpInfo;
@property (nonatomic) BOOL canClick;
@property (retain, nonatomic) NSString *backgroundColor;
@property (nonatomic) unsigned int type;

+ (void)initialize;

@end
