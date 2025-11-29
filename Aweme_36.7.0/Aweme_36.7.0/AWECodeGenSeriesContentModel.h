@class NSString;

@interface AWECodeGenSeriesContentModel : AWEBaseDataModel

@property (nonatomic) int seriesContentType;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *contentTypeUrl;
@property (nonatomic) long long seriesChargeType;
@property (copy, nonatomic) NSString *fpPicUrl;
@property (copy, nonatomic) NSString *scPicUrlDaySelected;
@property (copy, nonatomic) NSString *scPicUrlNightSelected;
@property (copy, nonatomic) NSString *scPicUrlDayNotSelected;
@property (copy, nonatomic) NSString *scPicUrlNightNotSelected;
@property (copy, nonatomic) NSString *schema;
@property (nonatomic) BOOL notShowInSelectionPage;
@property (copy, nonatomic) NSString *jumpSchema;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
