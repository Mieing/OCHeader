@class AWEDiggNotificationIMSourceModel, NSNumber, AWEURLModel;

@interface AWEInteractAdditionalDiggModel : AWEBaseApiModel

@property (nonatomic) long long cid;
@property (retain, nonatomic) AWEDiggNotificationIMSourceModel *imSource;
@property (retain, nonatomic) AWEURLModel *coverOrigin;
@property (retain, nonatomic) NSNumber *mergeCount;

+ (id)imSourceJSONTransformer;
+ (id)coverOriginJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
