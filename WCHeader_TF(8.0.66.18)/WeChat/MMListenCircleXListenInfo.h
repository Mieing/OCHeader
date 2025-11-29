@class NSString;

@interface MMListenCircleXListenInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *listenId;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *author;
@property (retain, nonatomic) NSString *cover;
@property (nonatomic) int type;
@property (nonatomic) unsigned int duration;

+ (void)initialize;

@end
