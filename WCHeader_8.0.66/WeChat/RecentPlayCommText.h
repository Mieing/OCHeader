@class NSString;

@interface RecentPlayCommText : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *moduleTitle;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *desc;
@property (retain, nonatomic) NSString *picUrl;
@property (nonatomic) unsigned int picStyle;
@property (nonatomic) BOOL needCrown;
@property (retain, nonatomic) NSString *jumpUrl;
@property (nonatomic) unsigned int positionId;
@property (retain, nonatomic) NSString *externInfo;
@property (retain, nonatomic) NSString *bizId;
@property (retain, nonatomic) NSString *coverPicUrl;

+ (void)initialize;

@end
