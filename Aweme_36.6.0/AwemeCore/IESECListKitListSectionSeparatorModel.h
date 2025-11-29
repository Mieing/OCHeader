@class UIColor;

@interface IESECListKitListSectionSeparatorModel : NSObject

@property (nonatomic) double height;
@property (nonatomic) struct IESECListKitSeparatorInsets { double left; double right; } separatorInsets;
@property (retain, nonatomic) UIColor *separatorColor;

- (void).cxx_destruct;
- (id)init;

@end
