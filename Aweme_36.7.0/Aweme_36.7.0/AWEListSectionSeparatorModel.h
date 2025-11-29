@class UIColor;

@interface AWEListSectionSeparatorModel : NSObject

@property (nonatomic) double height;
@property (nonatomic) struct AWEListKitSeparatorInsets { double left; double right; } separatorInsets;
@property (retain, nonatomic) UIColor *separatorColor;

- (void).cxx_destruct;
- (id)init;

@end
