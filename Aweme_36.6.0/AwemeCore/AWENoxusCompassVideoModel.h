@class AWENoxusVideoPaymentInfo, NSString, NSArray, NSNumber, AWEURLModel;

@interface AWENoxusCompassVideoModel : AWEBaseApiModel

@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL episodeFinished;
@property (nonatomic) BOOL isUpdating;
@property (copy, nonatomic) NSNumber *totalNum;
@property (copy, nonatomic) NSNumber *currentTotalNum;
@property (copy, nonatomic) NSString *albumID;
@property (copy, nonatomic) NSString *intro;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *originTitle;
@property (retain, nonatomic) AWEURLModel *albumCover;
@property (copy, nonatomic) NSNumber *playNum;
@property (copy, nonatomic) NSString *casts;
@property (copy, nonatomic) NSString *tag;
@property (copy, nonatomic) NSNumber *status;
@property (nonatomic) unsigned long long forbiddenCode;
@property (copy, nonatomic) NSString *forbiddenReason;
@property (copy, nonatomic) NSArray *selections;
@property (copy, nonatomic) NSString *albumGroupId;
@property (copy, nonatomic) NSString *compassId;
@property (copy, nonatomic) NSString *seriesId;
@property (copy, nonatomic) NSString *awemeId;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *albumItemID;
@property (copy, nonatomic) NSString *updatedAlbum;
@property (copy, nonatomic) NSString *episodeLookAt;
@property (copy, nonatomic) NSNumber *historyProgress;
@property (nonatomic) long long label;
@property (nonatomic) long long albumTag;
@property (retain, nonatomic) AWENoxusVideoPaymentInfo *paymentInfo;

+ (id)paymentInfoJSONTransformer;
+ (id)albumCoverJSONTransformer;
+ (id)selectionsJSONTransformer;
+ (id)labelBackgroundColor:(long long)a0;
+ (id)labelFontColor:(long long)a0;
+ (id)labelString:(long long)a0;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
