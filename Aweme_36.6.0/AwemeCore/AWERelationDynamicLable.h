@class AWECommentModel, NSString, NSDictionary, NSArray, NSNumber, AWEURLModel;

@interface AWERelationDynamicLable : AWEBaseApiModel

@property (nonatomic) long long labelSubtype;
@property (retain, nonatomic) NSDictionary *logExtraDic;
@property (copy, nonatomic) NSString *nickname;
@property (copy, nonatomic) NSString *labelInfo;
@property (copy, nonatomic) NSString *userID;
@property (nonatomic) long long labelType;
@property (copy, nonatomic) NSString *detailLabelType;
@property (retain, nonatomic) NSNumber *tagId;
@property (copy, nonatomic) NSString *tabLabelInfo;
@property (nonatomic) long long showType;
@property (copy, nonatomic) NSString *labelInfoColor;
@property (copy, nonatomic) NSString *labelInfoBackgroundColor;
@property (copy, nonatomic) NSString *tabLabelInfoColor;
@property (copy, nonatomic) NSString *tabLabelInfoBackgroundColor;
@property (retain, nonatomic) AWEURLModel *labelInfoBackgroundImageURL;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *labelInfoBackgroundImgStretchPosition;
@property (retain, nonatomic) NSNumber *commentID;
@property (retain, nonatomic) NSNumber *count;
@property (copy, nonatomic) NSString *trackLabelTag;
@property (copy, nonatomic) NSString *trackLabelType;
@property (retain, nonatomic) NSArray *userList;
@property (copy, nonatomic) NSArray *copyedLastUserList;
@property (nonatomic) BOOL showArrow;
@property (copy, nonatomic) NSString *extra;
@property (copy, nonatomic) NSString *logExtra;
@property (retain, nonatomic) AWECommentModel *commentModel;
@property (nonatomic) BOOL nearbyJumpLabelhasShowed;
@property (copy, nonatomic) NSString *nearbyChannelName;
@property (nonatomic) long long notShowReason;

+ (id)userListJSONTransformer;
+ (id)labelTypeJSONTransformer;
+ (id)showTypeJSONTransformer;
+ (id)labelInfoBackgroundImageURLJSONTransformer;
+ (id)commentModelJSONTransformer;
+ (void)initialize;
+ (id)JSONKeyPathsByPropertyKey;

- (id)_logExtraDictionary;
- (BOOL)shouldShowBackgroundImage;
- (id)schoolID;
- (BOOL)isFromUser:(id)a0;
- (void).cxx_destruct;
- (id)schoolName;

@end
