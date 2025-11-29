@class NSString;

@interface WCFinderFeedLikeMilestoneInfo : NSObject

@property (retain, nonatomic) NSString *feedId;
@property (nonatomic) unsigned long long milestoneType;
@property (retain, nonatomic) NSString *selfAvatarURLStr;
@property (retain, nonatomic) NSString *authorAvatarURLStr;
@property (retain, nonatomic) NSString *authorNickname;
@property (retain, nonatomic) NSString *authorFinderUsername;
@property (nonatomic) double generateTimeInSecond;
@property (retain, nonatomic) NSString *likeDateStr;
@property (retain, nonatomic) NSString *authIconURLStr;
@property (nonatomic) unsigned long long milestoneCount;

+ (id)writePosterInfoToJPEGData:(id)a0 milestoneType:(unsigned long long)a1 milestoneCount:(unsigned long long)a2;
+ (id)getPosterInfoFromExifJSONStr:(id)a0;

- (id)initWithFeedId:(id)a0 type:(unsigned long long)a1 author:(id)a2 milestoneCount:(unsigned long long)a3;
- (id)commonIconName;
- (id)selfLikeAuthorStr;
- (id)likeCountStr;
- (id)supplementalText;
- (id)goldenLikeTipsStr;
- (id)toInteractionMilestoneInfo;
- (void).cxx_destruct;

@end
