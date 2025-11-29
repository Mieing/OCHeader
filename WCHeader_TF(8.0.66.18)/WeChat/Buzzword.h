@class NSString;

@interface Buzzword : WXPBGeneratedMessage

@property (nonatomic) unsigned long long buzzwordId;
@property (retain, nonatomic) NSString *content;
@property (nonatomic) unsigned long long likeCount;
@property (nonatomic) unsigned int liked;

+ (void)initialize;

@end
