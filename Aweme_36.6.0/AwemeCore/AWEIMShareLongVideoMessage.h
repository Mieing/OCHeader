@class NSArray, NSString, AWELVideoEpisodeInfoModel, NSNumber, AWELVideoAlbumInfoModel;

@interface AWEIMShareLongVideoMessage : AWEIMCardMessage

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
@property (copy, nonatomic) NSString *pushDetail;
@property (copy, nonatomic) NSString *albumID;
@property (copy, nonatomic) NSString *episodeID;
@property (copy, nonatomic) NSNumber *paymentType;
@property (copy, nonatomic) NSNumber *groupSource;
@property (retain, nonatomic) AWELVideoAlbumInfoModel *albumInfoModel;
@property (retain, nonatomic) AWELVideoEpisodeInfoModel *episodeInfoModel;

+ (long long)customMessageType;

- (id)initWithContentDict:(id)a0;
- (BOOL)isAllowedCellEdit;
- (id)hintText;
- (BOOL)isUserCellType;
- (id)getContentDict;
- (id)contentComponentName;
- (id)detailSchema;
- (BOOL)supportRefactorCell;
- (id)quoteContentComponentName;
- (BOOL)isAllowedEmojiReply;
- (BOOL)shouldShowNicknameWithMessageType;
- (id)hintOnInputVCWhenQuoted;
- (BOOL)shouldChangeVisibleStatus;
- (BOOL)isAllowedForward;
- (id)itemIDUsedForContentAvailableRefresh;
- (struct CGSize { double x0; double x1; })coverSizeWhenQuotedIfHave;
- (id)episodeTypeStr;
- (id)videoTageStr;
- (id)paymentStr;
- (id)episodeSeqDesc;
- (id)supportMessageMenuTypeList;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
