@class NSString, FinderJumpInfo;

@interface FinderLiveErrorPage : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) NSString *wording;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *jumpUrl;
@property (retain, nonatomic) NSString *urlWording;
@property (retain, nonatomic) FinderJumpInfo *jumpInfo;

+ (void)initialize;

@end
