@class NSString;

@interface AWEAdSearchLandingPageSheet : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long pageType;
@property (nonatomic) double heightRatio;
@property (nonatomic) double keyboardShowHeightRatio;
@property (nonatomic) BOOL keyboardShowSwitch;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
