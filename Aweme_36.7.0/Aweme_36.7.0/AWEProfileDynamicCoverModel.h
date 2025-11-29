@class NSString, NSNumber, AWEAwemeModel;

@interface AWEProfileDynamicCoverModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWEAwemeModel *aweme;
@property (copy, nonatomic) NSString *pullText;
@property (retain, nonatomic) NSNumber *startTime;
@property (retain, nonatomic) NSNumber *endTime;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)awemeJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
