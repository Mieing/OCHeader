@class NSString, NSNumber, AWEURLModel;

@interface AWENearbyMallLiveResourceInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *jumpSchema;
@property (copy, nonatomic) AWEURLModel *backgroundImageURL;
@property (retain, nonatomic) NSNumber *insertPosition;
@property (copy, nonatomic) NSString *trackParams;
@property (retain, nonatomic) AWEURLModel *titleImage;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)backgroundImageURLJSONTransformer;
+ (id)titleImageJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
