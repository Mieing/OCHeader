@class NSString;

@interface MMListenCircleXFinderInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *tid;
@property (retain, nonatomic) NSString *nonceId;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *author;
@property (retain, nonatomic) NSString *cover;
@property (nonatomic) int duration;
@property (retain, nonatomic) NSString *exportId;
@property (nonatomic) float width;
@property (nonatomic) float height;
@property (nonatomic) unsigned long long feedId;

+ (void)initialize;

@end
