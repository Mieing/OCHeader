@class NSString;

@interface MMListenCircleListenInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *listenId;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *author;
@property (retain, nonatomic) NSString *cover;
@property (nonatomic) int type;
@property (nonatomic) int duration;
@property (retain, nonatomic) NSString *webUrl;

+ (void)initialize;

@end
