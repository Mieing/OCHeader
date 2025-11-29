@class NSString, NSNumber, NSDictionary;

@interface AWENearbyGuideFloatBackModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long pageTypeId;
@property (nonatomic) long long positionScene;
@property (copy, nonatomic) id /* block */ attachClickedHandler;
@property (copy, nonatomic) id /* block */ attachBeforeClickedHandler;
@property (copy, nonatomic) NSString *urlString;
@property (copy, nonatomic) NSString *floatBackText;
@property (nonatomic) BOOL backToFeed;
@property (copy, nonatomic) NSString *buttonType;
@property (retain, nonatomic) NSNumber *singleHiddenCount;
@property (retain, nonatomic) NSNumber *doubleHiddenCount;
@property (retain, nonatomic) NSNumber *resident;
@property (retain, nonatomic) NSNumber *shrinkCount;
@property (nonatomic) long long actionType;
@property (nonatomic) long long offsetFromBottom;
@property (copy, nonatomic) id /* block */ clickedHandler;
@property (nonatomic) long long bitmapRefreshPage;
@property (copy, nonatomic) NSDictionary *notiParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
