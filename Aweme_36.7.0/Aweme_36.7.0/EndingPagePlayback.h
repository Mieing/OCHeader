@class NSString;

@interface EndingPagePlayback : IESLivePBBaseMessage

@property (nonatomic) long long playbackStatus;
@property (nonatomic) long long playbackId;
@property (copy, nonatomic) NSString *playbackIdStr;
@property (copy, nonatomic) NSString *lvideoItemId;

+ (id)descriptor;

@end
