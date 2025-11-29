@class NSString, MMFinderLiveGameUserInfo;

@interface MMFinderLiveGameStartParamModel : NSObject

@property (nonatomic) long long entryScene;
@property (nonatomic) int wxaGameLiveScene;
@property (retain, nonatomic) NSString *appId;
@property (retain, nonatomic) MMFinderLiveGameUserInfo *gameUserInfo;

- (id)initWithAppId:(id)a0 gameLiveEntryScene:(long long)a1;
- (void).cxx_destruct;

@end
