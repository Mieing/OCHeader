@class NSString, AWERecommendReasonInteractModel, NSArray;

@interface AFDRecommendReasonDataModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL addressBookPermission;
@property (nonatomic) BOOL gpsPermission;
@property (retain, nonatomic) AWERecommendReasonInteractModel *interaction;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) NSArray *style;
@property (retain, nonatomic) NSString *followCardClientTrackInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)styleJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
