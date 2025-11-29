@class NSString;

@interface MMListenLiveInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *tid;
@property (retain, nonatomic) NSString *nonceId;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *author;
@property (retain, nonatomic) NSString *cover;
@property (retain, nonatomic) NSString *headImg;
@property (retain, nonatomic) NSString *authorUsername;
@property (nonatomic) BOOL isPlayable;
@property (retain, nonatomic) NSString *exportId;

+ (void)initialize;

@end
