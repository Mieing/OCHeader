@class NSString, BaseResponse;

@interface FinderLiveGetReplayUrlResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (nonatomic) unsigned int status;
@property (retain, nonatomic) NSString *replayUrl;

+ (void)initialize;

@end
