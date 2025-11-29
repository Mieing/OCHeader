@class NSString;

@interface IESECListKitABValue : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long uiStyle;
@property (nonatomic) double aspectRatio;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;


@end
