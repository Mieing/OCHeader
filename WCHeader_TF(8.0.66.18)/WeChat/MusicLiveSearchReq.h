@class BaseRequest, NSString;

@interface MusicLiveSearchReq : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSString *queryContent;
@property (nonatomic) unsigned int offset;
@property (retain, nonatomic) NSString *requestId;

+ (void)initialize;

@end
