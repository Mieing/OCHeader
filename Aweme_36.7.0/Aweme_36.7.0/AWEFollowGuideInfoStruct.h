@class NSString, NSMutableDictionary;

@interface AWEFollowGuideInfoStruct : NSObject

@property (nonatomic) double watchedTime;
@property (nonatomic) double lastWatchedTime;
@property (nonatomic) long long shownCount;
@property (nonatomic) long long currentPlayingIndex;
@property (copy, nonatomic) NSString *creatorId;
@property (copy, nonatomic) NSString *itemId;
@property (nonatomic) BOOL showedFollowGuideButton;
@property (nonatomic) long long vvCount;
@property (copy, nonatomic) NSString *vvItemId;
@property (nonatomic) double dismissRemainingTime;
@property (retain, nonatomic) NSMutableDictionary *uninterestedStoragedInfo;

- (id)initWithCreatorId:(id)a0;
- (void).cxx_destruct;

@end
