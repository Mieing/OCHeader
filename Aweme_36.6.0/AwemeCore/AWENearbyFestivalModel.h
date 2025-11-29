@class NSString;

@interface AWENearbyFestivalModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long startTime;
@property (nonatomic) long long endTime;
@property (nonatomic) long long frequency;
@property (nonatomic) long long dayFrequency;
@property (copy, nonatomic) NSString *festivalName;
@property (copy, nonatomic) NSString *extra;
@property (nonatomic) long long bubbleAttribute;
@property (nonatomic) long long totalShowCnt;
@property (nonatomic) long long lastShowTimestamp;
@property (nonatomic) long long lastShowTimeCnt;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)automaticallyDefaultMapping;

- (id)initWithNearbyGuideBubble:(id)a0;
- (void).cxx_destruct;

@end
