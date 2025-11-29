@class BaseRequest, NSString;

@interface MMListenCollabMembersRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *categoryId;
@property (nonatomic) int offset;
@property (nonatomic) int count;

+ (void)initialize;

@end
