@class NSString, NSNumber;

@interface SendMusicRequest : NSObject

@property (copy, nonatomic) NSString *musicId;
@property (copy, nonatomic) NSString *songName;
@property (copy, nonatomic) NSString *singer;
@property (copy, nonatomic) NSString *dataUrl;
@property (copy, nonatomic) NSString *appid;
@property (copy, nonatomic) NSString *webUrl;
@property (copy, nonatomic) NSString *coverUrl;
@property (copy, nonatomic) NSString *mid;
@property (copy, nonatomic) NSString *lyric;
@property (retain, nonatomic) NSNumber *requestCode;

+ (id)makeWithMusicId:(id)a0 songName:(id)a1 singer:(id)a2 dataUrl:(id)a3 appid:(id)a4 webUrl:(id)a5 coverUrl:(id)a6 mid:(id)a7 lyric:(id)a8 requestCode:(id)a9;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
