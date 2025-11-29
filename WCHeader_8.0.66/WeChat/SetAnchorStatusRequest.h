@class BaseRequest, NSData;

@interface SetAnchorStatusRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (nonatomic) unsigned long long liveId;
@property (retain, nonatomic) NSData *anchorStatusBuffer;

+ (void)initialize;

@end
