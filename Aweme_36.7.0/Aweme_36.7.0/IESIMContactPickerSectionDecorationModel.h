@class NSString, NSArray, UIColor;

@interface IESIMContactPickerSectionDecorationModel : NSObject <IESIMContactPickerSectionDecorationModelProtocol>

@property (copy, nonatomic) NSString *elementKind;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } decorationInsets;
@property (nonatomic) double borderWidth;
@property (copy, nonatomic) NSArray *gradientBorderColors;
@property (nonatomic) double cornerRadius;
@property (nonatomic) unsigned long long corner;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithElementKind:(id)a0;
- (void).cxx_destruct;

@end
