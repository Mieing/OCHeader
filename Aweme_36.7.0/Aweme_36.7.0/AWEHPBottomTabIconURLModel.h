@class NSString;

@interface AWEHPBottomTabIconURLModel : MTLModel <MTLJSONSerializing>

@property (readonly, copy, nonatomic) NSString *normalLightURLString;
@property (readonly, copy, nonatomic) NSString *normalDarkURLString;
@property (readonly, copy, nonatomic) NSString *selectedLightURLString;
@property (readonly, copy, nonatomic) NSString *selectedDarkURLString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
