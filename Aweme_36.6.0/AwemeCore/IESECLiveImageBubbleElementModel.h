@class NSString;

@interface IESECLiveImageBubbleElementModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) double height;
@property (nonatomic) double horizontalPadding;
@property (nonatomic) double borderRadius;
@property (retain, nonatomic) NSString *backgroundColor;
@property (retain, nonatomic) NSString *borderColor;
@property (retain, nonatomic) NSString *text;
@property (nonatomic) double fontSize;
@property (retain, nonatomic) NSString *textColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
