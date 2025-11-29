@class BaseRequest, NSMutableArray;

@interface BatchRenameTagsRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int count;
@property (retain, nonatomic) NSMutableArray *renameRequestList;

+ (void)initialize;

@end
