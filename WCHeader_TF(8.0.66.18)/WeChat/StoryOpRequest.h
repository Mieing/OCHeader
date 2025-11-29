@class BaseRequest, NSMutableArray;

@interface StoryOpRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int opCount;
@property (retain, nonatomic) NSMutableArray *opList;

+ (void)initialize;

@end
