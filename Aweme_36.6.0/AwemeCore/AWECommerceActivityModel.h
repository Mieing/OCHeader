@class NSString, NSArray, NSDate, AWEURLModel;

@interface AWECommerceActivityModel : MTLModel <MTLJSONSerializing>

@property (readonly, nonatomic) NSDate *startTime;
@property (readonly, nonatomic) NSDate *endTime;
@property (retain, nonatomic) AWEURLModel *imageURL;
@property (copy, nonatomic) NSString *webURLString;
@property (copy, nonatomic) NSString *openURLString;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) long long startTimeInterval;
@property (nonatomic) long long endTimeInterval;
@property (copy, nonatomic) NSArray *timeRanges;
@property (retain, nonatomic) AWEURLModel *clickTrackURLList;
@property (retain, nonatomic) AWEURLModel *trackURLList;
@property (nonatomic) long long actType;
@property (copy, nonatomic) NSString *resourceURL;
@property (copy, nonatomic) NSString *complianceData;
@property (copy, nonatomic) NSString *configID;
@property (nonatomic) long long resourceType;
@property (nonatomic) long long appearTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)imageURLJSONTransformer;
+ (id)timeRangesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isValideDate;
- (BOOL)inTimeRangeWithCurrentTime:(double)a0;
- (void).cxx_destruct;

@end
