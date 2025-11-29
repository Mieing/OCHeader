@class NSString, NSMutableArray;

@interface CoverSetRedDotInfo : WXPBGeneratedMessage

@property (nonatomic) BOOL isShow;
@property (retain, nonatomic) NSMutableArray *wordings;
@property (retain, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) NSString *version;
@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned int expiredTime;
@property (retain, nonatomic) NSString *tagName;

+ (void)initialize;

@end
