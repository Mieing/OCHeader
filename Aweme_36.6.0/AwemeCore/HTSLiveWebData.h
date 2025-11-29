@class HTSLiveStreamUrl;

@interface HTSLiveWebData : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveStreamUrl *additionalStreamURL;
@property (nonatomic) BOOL hasAdditionalStreamURL;

+ (id)descriptor;

@end
