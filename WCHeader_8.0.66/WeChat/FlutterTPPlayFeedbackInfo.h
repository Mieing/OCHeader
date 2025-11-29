@class NSString;

@interface FlutterTPPlayFeedbackInfo : NSObject

@property (nonatomic) long long playCount;
@property (nonatomic) long long loopCount;
@property (nonatomic) long long totalPlaybackTimeMS;
@property (nonatomic) long long playbackTimeMS;
@property (nonatomic) long long totalBufferTimeMS;
@property (nonatomic) long long playerErrorCode;
@property (copy, nonatomic) NSString *playerErrorDesc;
@property (nonatomic) long long durationMS;
@property (nonatomic) long long presentationHeight;
@property (nonatomic) long long presentationWidth;
@property (nonatomic) long long size;
@property (nonatomic) long long bitrate;
@property (copy, nonatomic) NSString *vcodec;
@property (nonatomic) long long bufferredCount;
@property (nonatomic) long long actualPlayingTimeMS;
@property (nonatomic) long long getMaxPlayPosition;
@property (nonatomic) long long firstLoadingTimeMS;

+ (id)makeWithPlayCount:(long long)a0 loopCount:(long long)a1 totalPlaybackTimeMS:(long long)a2 playbackTimeMS:(long long)a3 totalBufferTimeMS:(long long)a4 playerErrorCode:(long long)a5 playerErrorDesc:(id)a6 durationMS:(long long)a7 presentationHeight:(long long)a8 presentationWidth:(long long)a9 size:(long long)a10 bitrate:(long long)a11 vcodec:(id)a12 bufferredCount:(long long)a13 actualPlayingTimeMS:(long long)a14 getMaxPlayPosition:(long long)a15 firstLoadingTimeMS:(long long)a16;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
