@class NSString;

@interface ContentInfo : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *quickResponseContentId;
@property (nonatomic) int type;
@property (nonatomic) BOOL isGreet;
@property (nonatomic) unsigned int relationType;

+ (void)initialize;

@end
