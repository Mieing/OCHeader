@class NSArray, NSDictionary, NSString, AWELVideoEpisodeInfoModel, NSNumber, AWELVideoAlbumInfoModel;

@interface AWEIMShareLongVideoInfo : NSObject <NSCopying>

@property (retain, nonatomic) NSDictionary *rawDict;
@property (copy, nonatomic) NSArray *categoryTypeArray;
@property (copy, nonatomic) NSArray *categoryTopicArray;
@property (retain, nonatomic) NSNumber *label;
@property (copy, nonatomic) NSArray *rewardList;
@property (copy, nonatomic) NSString *score;
@property (retain, nonatomic) NSNumber *seqCount;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSArray *typeList;
@property (retain, nonatomic) NSNumber *episodeType;
@property (retain, nonatomic) NSNumber *seq;
@property (retain, nonatomic) NSNumber *rank;
@property (copy, nonatomic) NSString *albumID;
@property (copy, nonatomic) NSString *episodeID;
@property (copy, nonatomic) NSNumber *paymentType;
@property (copy, nonatomic) NSNumber *groupSource;
@property (copy, nonatomic) NSString *highlightItemId;
@property (copy, nonatomic) NSString *highlightAuthToken;
@property (retain, nonatomic) AWELVideoAlbumInfoModel *albumInfoModel;
@property (retain, nonatomic) AWELVideoEpisodeInfoModel *episodeInfoModel;

- (id)initWithContentDict:(id)a0;
- (id)hintText;
- (id)episodeTypeStr;
- (id)videoTageStr;
- (id)paymentStr;
- (id)episodeSeqDesc;
- (void).cxx_destruct;
- (id)videoType;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
