@class NSString, AWEMomentCameraPolaroidTextConfig;

@interface AWEMomentCameraPolaroidConfigItem : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *bgURL1x1;
@property (copy, nonatomic) NSString *bgURL4x3;
@property (nonatomic) double photoTopMargin;
@property (retain, nonatomic) AWEMomentCameraPolaroidTextConfig *textConfig;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)textConfigJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
