@class NSString, AWELVideoSideBarGuideModel;

@interface AWELVideoSideBarGuideResponse : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) AWELVideoSideBarGuideModel *revisitGuide;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)revisitGuideJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
