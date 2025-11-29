@class LOTComposition, NSString, AWEActivityPendantDataModel, NSArray, UIImage, AWEActivityCapsuleDataModel, NSDictionary;

@interface AWEActivityConfigModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *activityName;
@property (nonatomic) long long rainID;
@property (retain, nonatomic) AWEActivityPendantDataModel *pendantData;
@property (retain, nonatomic) AWEActivityCapsuleDataModel *capsuleData;
@property (retain, nonatomic) NSString *pendantTypeName;
@property (nonatomic) unsigned long long pendantType;
@property (nonatomic) BOOL canCloseExpandedPendant;
@property (nonatomic) BOOL canCloseFoldedPendant;
@property (nonatomic) unsigned long long coldStartShow;
@property (nonatomic) long long countOfDisappearAfter;
@property (nonatomic) long long timeOfDisappearAfter;
@property (nonatomic) long long closeHoursNotShow;
@property (nonatomic) double startTime;
@property (nonatomic) double endTime;
@property (retain, nonatomic) NSArray *showTab;
@property (nonatomic) BOOL enableFold;
@property (nonatomic) BOOL enableFoldedPendantRouter;
@property (nonatomic) BOOL disableForceShow;
@property (nonatomic) BOOL disableAvoidStrategy;
@property (nonatomic) unsigned long long taskType;
@property (retain, nonatomic) NSArray *taskArray;
@property (retain, nonatomic) LOTComposition *pendantExpendedLottie;
@property (retain, nonatomic) LOTComposition *pendantFoldedLottie;
@property (retain, nonatomic) UIImage *expandedImage;
@property (retain, nonatomic) UIImage *foldedImage;
@property (nonatomic) BOOL isInternalResource;
@property (readonly, copy, nonatomic) NSDictionary *dictionaryValue;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)taskArrayJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
