@class NSString, NSDictionary;

@interface AWESSCollegeMainEntranceModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL needsDisplayHomeMainEntrance;
@property (nonatomic) BOOL needsDisplaySugMainEntrance;
@property (nonatomic) long long sugMainEntranceQueryCountThrottle;
@property (nonatomic) double expireTime;
@property (copy, nonatomic) NSString *expandedIconLight;
@property (copy, nonatomic) NSString *expandedIconDark;
@property (copy, nonatomic) NSString *foldedIconLight;
@property (copy, nonatomic) NSString *foldedIconDark;
@property (copy, nonatomic) NSString *homePageSchema;
@property (copy, nonatomic) NSString *searchMiddlePageSchema;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (nonatomic) long long homePageEntryFoldSlide;
@property (nonatomic) long long homePageEntryFoldDays;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
