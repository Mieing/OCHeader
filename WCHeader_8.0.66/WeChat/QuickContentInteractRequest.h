@class NSString;

@interface QuickContentInteractRequest : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *quickResponseContentId;
@property (nonatomic) int operateType;
@property (retain, nonatomic) NSString *replyContent;
@property (nonatomic) unsigned int greet;
@property (nonatomic) unsigned int follow;

+ (void)initialize;

@end
