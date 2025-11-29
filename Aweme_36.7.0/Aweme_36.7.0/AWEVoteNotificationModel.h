@class AWERelationDynamicLable, NSArray, NSString, AWEAwemeModel, NSNumber, AWEURLModel;

@interface AWEVoteNotificationModel : AWEBaseApiModel

@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (retain, nonatomic) NSArray *fromUser;
@property (retain, nonatomic) AWEURLModel *imageUrl;
@property (retain, nonatomic) NSString *schemaUrl;
@property (retain, nonatomic) NSNumber *mergeCount;
@property (copy, nonatomic) NSString *optionText;
@property (nonatomic) long long refType;
@property (retain, nonatomic) AWERelationDynamicLable *relationLabel;
@property (copy, nonatomic) NSString *labelTrack;
@property (copy, nonatomic) NSArray *fansTagArray;
@property (retain, nonatomic) NSNumber *optionID;

+ (id)imageUrlJSONTransformer;
+ (id)awemeJSONTransformer;
+ (id)relationLabelJSONTransformer;
+ (id)fansTagArrayJSONTransformer;
+ (id)fromUserJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
