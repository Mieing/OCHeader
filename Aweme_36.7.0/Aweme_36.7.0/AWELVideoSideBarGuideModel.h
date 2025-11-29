@class NSString, AWELVideoSideBarGuideCoverText, AWEURLModel;

@interface AWELVideoSideBarGuideModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL needGuide;
@property (retain, nonatomic) AWEURLModel *guideCoverImage;
@property (retain, nonatomic) AWELVideoSideBarGuideCoverText *guideCoverText;
@property (nonatomic) long long showStartTime;
@property (nonatomic) long long maxShowNum;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)guideCoverImageJSONTransformer;
+ (id)guideCoverTextJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
