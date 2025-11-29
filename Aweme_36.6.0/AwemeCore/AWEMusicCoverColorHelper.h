@interface AWEMusicCoverColorHelper : NSObject

@property (copy, nonatomic) id /* block */ easeSenseLight;
@property (copy, nonatomic) id /* block */ easeSenseDark;

+ (id)shared;

- (id)bgColorOf:(id)a0;
- (id)listenFeedBgColorOf:(id)a0;
- (double)changeLWithS:(double)a0 originalL:(double)a1 changedL:(double)a2;
- (double)getSL:(double)a0;
- (void).cxx_destruct;

@end
