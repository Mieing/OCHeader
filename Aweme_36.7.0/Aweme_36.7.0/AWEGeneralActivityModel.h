@class NSString, NSArray, NSNumber, AWEURLModel;

@interface AWEGeneralActivityModel : AWEBaseApiModel <IGListDiffable>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *linkURL;
@property (nonatomic) BOOL hideAvatar;
@property (retain, nonatomic) AWEURLModel *bannerURL;
@property (copy, nonatomic) NSString *activityCardID;
@property (retain, nonatomic) NSNumber *aladdinID;
@property (retain, nonatomic) NSNumber *scale;
@property (retain, nonatomic) NSArray *relatedUserArray;
@property (retain, nonatomic) NSArray *reservationUserArray;
@property (retain, nonatomic) NSNumber *liveType;

+ (id)bannerURLJSONTransformer;
+ (id)relatedUserArrayJSONTransformer;
+ (id)reservationUserArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (id)diffIdentifier;
- (BOOL)isEqualToDiffableObject:(id)a0;
- (void).cxx_destruct;

@end
