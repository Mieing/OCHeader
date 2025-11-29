@class NSString;

@interface AWELearnMoreModifyModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *learnMoreBgColor;
@property (nonatomic) long long fontScaleType;
@property (nonatomic) BOOL dynamicFlash;
@property (copy, nonatomic) NSString *buttonText;
@property (nonatomic) long long animationType;
@property (nonatomic) BOOL disableRevealButton;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
