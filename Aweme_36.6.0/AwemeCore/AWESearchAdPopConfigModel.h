@class NSString, NSArray, AWEURLModel;

@interface AWESearchAdPopConfigModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *biz;
@property (nonatomic) long long countdownSecs;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (copy, nonatomic) NSString *imageURL;
@property (copy, nonatomic) NSArray *imageURLList;
@property (copy, nonatomic) NSString *openURL;
@property (copy, nonatomic) NSString *externalURL;
@property (copy, nonatomic) NSString *mpURL;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSString *conflictWith;
@property (copy, nonatomic) NSString *logExtra;
@property (retain, nonatomic) AWEURLModel *clickTrackURLList;
@property (retain, nonatomic) AWEURLModel *trackURLList;

+ (BOOL)automaticallyDefaultMapping;
+ (id)trackURLListJSONTransformer;
+ (id)clickTrackURLListJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
