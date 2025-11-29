@class NSString, FinderLiveContact;

@interface MMFinderLiveUserStateItem : MMLiveUserStateItem

@property (retain, nonatomic) FinderLiveContact *liveContact;
@property (nonatomic) unsigned int rank;
@property (nonatomic) BOOL isKtvPlayMember;
@property (nonatomic) unsigned int playSize;
@property (nonatomic) unsigned int playAvgScores;
@property (retain, nonatomic) NSString *bestPlaySongName;
@property (retain, nonatomic) NSString *bestPlayLevel;
@property (nonatomic) BOOL isExposed;
@property (nonatomic) BOOL onlySingSegment;

+ (id)batchConvert:(id)a0;
+ (id)batchConvertKtvPlayMember:(id)a0;

- (id)initWithLiveContact:(id)a0;
- (id)initWithKtvPlayMember:(id)a0;
- (id)userName;
- (id)displayName;
- (id)headImageUrl;
- (unsigned long long)disableCommentDef;
- (unsigned long long)rewardAmountInHeat;
- (void).cxx_destruct;

@end
