@class NSArray, NSString;

@interface IESECLiveGoodsCarouselLineDataModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *titles;
@property (retain, nonatomic) NSArray *tracks;
@property (nonatomic) BOOL hasTracked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)tracksJSONTransformer;
+ (id)titlesJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
