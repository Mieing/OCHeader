@class BaseRequest, NSMutableArray;

@interface PrevDownloadCheckRequest : WXPBGeneratedMessage

@property (retain, nonatomic) BaseRequest *baseRequest;
@property (retain, nonatomic) NSMutableArray *bizReqs;
@property (nonatomic) unsigned long long prevDownloadFlag;

+ (void)initialize;

- (void)setPrevDownloadFlag:(unsigned long long)a0;
- (unsigned long long)prevDownloadFlag;
- (void)setBizReqs:(id)a0;
- (id)bizReqs;
- (void)setBaseRequest:(id)a0;
- (id)baseRequest;

@end
