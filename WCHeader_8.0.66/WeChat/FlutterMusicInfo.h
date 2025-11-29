@class NSString, FLMusicIntType, NSNumber;

@interface FlutterMusicInfo : NSObject

@property (copy, nonatomic) NSString *musicId;
@property (copy, nonatomic) NSString *songName;
@property (copy, nonatomic) NSString *singer;
@property (copy, nonatomic) NSString *dataUrl;
@property (copy, nonatomic) NSString *appid;
@property (copy, nonatomic) NSString *webUrl;
@property (copy, nonatomic) NSString *coverUrl;
@property (retain, nonatomic) FLMusicIntType *duration;
@property (copy, nonatomic) NSString *mid;
@property (copy, nonatomic) NSString *lyric;
@property (copy, nonatomic) NSString *sourceType;
@property (copy, nonatomic) NSString *voiceId;
@property (copy, nonatomic) NSString *bizUsername;
@property (copy, nonatomic) NSString *tid;
@property (copy, nonatomic) NSString *nonceId;
@property (retain, nonatomic) NSNumber *voiceType;

+ (id)makeWithMusicId:(id)a0 songName:(id)a1 singer:(id)a2 dataUrl:(id)a3 appid:(id)a4 webUrl:(id)a5 coverUrl:(id)a6 duration:(id)a7 mid:(id)a8 lyric:(id)a9 sourceType:(id)a10 voiceId:(id)a11 bizUsername:(id)a12 tid:(id)a13 nonceId:(id)a14 voiceType:(id)a15;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
