@class NSString, NSDictionary, NSNumber, AWEURLModel;

@interface AWETeenHotSpotModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *hotID;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSNumber *watchCount;
@property (retain, nonatomic) NSNumber *videoCount;
@property (retain, nonatomic) AWEURLModel *cover;
@property (nonatomic) long long index;
@property (copy, nonatomic) NSDictionary *commonParams;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)coverJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (BOOL)isSameHotSpot:(id)a0;
- (void).cxx_destruct;

@end
