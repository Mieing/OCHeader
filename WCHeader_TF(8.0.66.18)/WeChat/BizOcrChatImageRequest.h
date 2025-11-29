@class BaseRequest, NSMutableArray;

@interface BizOcrChatImageRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned int source;
@property (retain, nonatomic) NSMutableArray *cdnImgs;
@property (nonatomic) unsigned long long sessionid64;
@property (nonatomic) unsigned int seqNum;

+ (void)initialize;

@end
