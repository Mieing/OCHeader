@class BaseRequest, NSMutableArray, NSData;

@interface BizFinderLiveReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *bizusername;
@property (retain, nonatomic) NSData *pagingBuffer;
@property (nonatomic) unsigned int pageSize;
@property (nonatomic) unsigned int scene;
@property (retain, nonatomic) NSMutableArray *finderusername;

+ (void)initialize;

@end
