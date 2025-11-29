@class AWEURLModel, NSString, AWELiveFeedLabelProfilePicSpliceModel, NSNumber, AWELiveFeedLabelSpliceModel;

@interface AWELiveFeedLabelInfoModel : AWEBaseApiModel

@property (nonatomic) BOOL isPaid;
@property (retain, nonatomic) NSNumber *timeInterval;
@property (nonatomic) long long labelType;
@property (nonatomic) long long displayType;
@property (retain, nonatomic) AWELiveFeedLabelSpliceModel *spliceLabel;
@property (retain, nonatomic) AWELiveFeedLabelProfilePicSpliceModel *profilePicSpliceLabel;
@property (retain, nonatomic) AWEURLModel *wholeLabel;
@property (retain, nonatomic) NSString *extra;
@property (nonatomic) BOOL containSelf;
@property (nonatomic) BOOL skylightStyle;

+ (id)spliceLabelJSONTransformer;
+ (id)wholeLabelJSONTransformer;
+ (id)profilePicSpliceLabelJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
