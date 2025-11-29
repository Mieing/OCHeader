@class NSArray, AWEDTOShootPic2VideoInfo, NSString;

@interface AWEDTOShootModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSArray *segment;
@property (retain, nonatomic) AWEDTOShootPic2VideoInfo *pic2videoText;
@property (copy, nonatomic) NSString *customizedPropId;
@property (copy, nonatomic) NSString *customizedBusinessExtra;
@property (nonatomic) BOOL macroMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)segmentJSONTransformer;
+ (id)pic2videoTextJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
