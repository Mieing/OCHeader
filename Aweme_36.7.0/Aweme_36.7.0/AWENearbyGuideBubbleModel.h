@class NSString, NSArray, AWEURLModel;

@interface AWENearbyGuideBubbleModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *bubbleText;
@property (copy, nonatomic) NSString *bubbleMessage;
@property (copy, nonatomic) NSString *diamondMessage;
@property (nonatomic) long long bubbleType;
@property (copy, nonatomic) NSArray *lifeBubbleCondition;
@property (copy, nonatomic) NSString *exposureMessage;
@property (copy, nonatomic) NSString *bubbleTypeTextForTrack;
@property (copy, nonatomic) NSString *nearbyTabBubbleMoment;
@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (nonatomic) int frequency;
@property (nonatomic) int dayFrequency;
@property (copy, nonatomic) NSString *festivalName;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) int bubbleAttribute;
@property (nonatomic) unsigned long long style;
@property (copy, nonatomic) AWEURLModel *bubbleImgUrl;
@property (copy, nonatomic) AWEURLModel *bubbleIconUrl;
@property (nonatomic) unsigned long long dotStyle;
@property (copy, nonatomic) NSString *dotText;
@property (copy, nonatomic) NSString *guideDsl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)JSONKeyPathsByPropertyKey;

- (id)createGrouponGeneralGuideModel;
- (id)createGeneralGuideModel;
- (void).cxx_destruct;

@end
