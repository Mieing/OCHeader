@class BaseRequest, NSString, NSMutableArray;

@interface SnsTagMemberOptionRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int opCode;
@property (nonatomic) unsigned long long tagId;
@property (retain, nonatomic) NSString *tagName;
@property (nonatomic) unsigned int count;
@property (retain, nonatomic) NSMutableArray *list;
@property (nonatomic) unsigned int scene;

+ (void)initialize;

@end
