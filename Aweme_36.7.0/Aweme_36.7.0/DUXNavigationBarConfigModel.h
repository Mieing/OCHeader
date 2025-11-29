@class NSString;

@interface DUXNavigationBarConfigModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) double titleFontSize;
@property (nonatomic) double subtitleFontSize;
@property (nonatomic) double dropDownIconSize;
@property (nonatomic) double iconButtonSize;
@property (nonatomic) double textButtonFontSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
