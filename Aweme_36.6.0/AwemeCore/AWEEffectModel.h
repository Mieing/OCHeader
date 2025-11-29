@class NSString, AWEAwemeModel, NSNumber, AWEURLModel;

@interface AWEEffectModel : AWEBaseApiModel

@property (retain, nonatomic) NSString *effectID;
@property (retain, nonatomic) NSString *effectName;
@property (retain, nonatomic) AWEURLModel *iconUrl;
@property (retain, nonatomic) AWEURLModel *authorAwemeCover;
@property (nonatomic) BOOL isUserSelectedCover;
@property (retain, nonatomic) NSString *selectedCoverItemID;
@property (retain, nonatomic) NSString *ownerID;
@property (retain, nonatomic) NSString *ownerName;
@property (retain, nonatomic) NSNumber *userCount;
@property (retain, nonatomic) AWEAwemeModel *relatedAweme;
@property (nonatomic) long long effectSource;
@property (retain, nonatomic) NSString *desc;
@property (nonatomic) BOOL isTopInProfile;
@property (nonatomic) BOOL isHiddenInProfile;

+ (id)iconUrlJSONTransformer;
+ (id)authorAwemeCoverJSONTransformer;
+ (id)relatedAwemeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
