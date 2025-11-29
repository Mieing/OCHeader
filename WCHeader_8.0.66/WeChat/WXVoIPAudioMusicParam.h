@class NSString;

@interface WXVoIPAudioMusicParam : NSObject

@property (nonatomic) int ID;
@property (copy, nonatomic) NSString *path;
@property (nonatomic) long long loopCount;
@property (nonatomic) BOOL publish;
@property (nonatomic) BOOL isShortFile;
@property (nonatomic) long long startTimeMS;
@property (nonatomic) long long endTimeMS;

- (id)init;
- (id)initWithBGMID:(int)a0 path:(id)a1;
- (id)initWithBGMID:(int)a0 path:(id)a1 loopCount:(long long)a2 publish:(BOOL)a3 enableCache:(BOOL)a4;
- (id)description;
- (void).cxx_destruct;

@end
