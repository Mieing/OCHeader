@class AWERelationDynamicLable, NSString, AWEAwemeModel, NSNumber, NSMutableArray;

@interface AWEViewHistoryNotificationModel : AWEBaseApiModel

@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (retain, nonatomic) NSMutableArray *fromUser;
@property (retain, nonatomic) NSNumber *mergeCount;
@property (retain, nonatomic) AWERelationDynamicLable *relationLabel;
@property (copy, nonatomic) NSString *labelText;
@property (nonatomic) long long labelType;
@property (copy, nonatomic) NSString *labelTrack;

+ (id)awemeJSONTransformer;
+ (id)relationLabelJSONTransformer;
+ (id)fromUserJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
