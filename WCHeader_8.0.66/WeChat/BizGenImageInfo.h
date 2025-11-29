@class NSString, NSData, NSMutableArray;

@interface BizGenImageInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *id;
@property (nonatomic) BOOL selected;
@property (nonatomic) unsigned int width;
@property (nonatomic) unsigned int height;
@property (retain, nonatomic) NSString *style;
@property (retain, nonatomic) NSString *revisedPrompt;
@property (retain, nonatomic) NSString *hash;
@property (retain, nonatomic) NSString *sessionId;
@property (retain, nonatomic) NSString *taskId;
@property (retain, nonatomic) NSData *tmpUrl;
@property (retain, nonatomic) NSMutableArray *subStyle;
@property (nonatomic) unsigned int createTime;
@property (nonatomic) unsigned int updateTime;
@property (nonatomic) unsigned int aiSource;
@property (nonatomic) unsigned int status;
@property (retain, nonatomic) NSString *prompt;
@property (retain, nonatomic) NSString *searchUrl;
@property (retain, nonatomic) NSString *scale;
@property (retain, nonatomic) NSString *color;

+ (void)initialize;

@end
