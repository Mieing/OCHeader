@class NSString, UIImage, MMListCellSeparatorConfig, MMListDataRepoetConfig;

@interface MMListCellConfig : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *subtitle;
@property (nonatomic) long long accessoryType;
@property (nonatomic) long long cellType;
@property (retain, nonatomic) UIImage *image;
@property (weak, nonatomic) id accessoryTarget;
@property (nonatomic) SEL accessoryAction;
@property (nonatomic) BOOL accessoryModeOn;
@property (nonatomic) double textMaxWidth;
@property (nonatomic) BOOL hidden;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } cellEdgeInsets;
@property (nonatomic) double imageToTextPadding;
@property (retain, nonatomic) NSString *pathKey;
@property (retain, nonatomic) MMListCellSeparatorConfig *separatorConfig;
@property (retain, nonatomic) MMListDataRepoetConfig *reportConfig;

+ (id)cellWithType:(long long)a0 title:(id)a1 image:(id)a2 subtitle:(id)a3 accessoryType:(long long)a4 accessoryTarget:(id)a5 accessoryAction:(SEL)a6;
+ (id)cellWithType:(long long)a0 title:(id)a1 image:(id)a2 subtitle:(id)a3 accessoryType:(long long)a4 accessoryTarget:(id)a5 accessoryAction:(SEL)a6 pathKey:(id)a7;
+ (id)cellWithText:(id)a0;
+ (id)cellWithImage:(id)a0;
+ (id)cellWithTitle:(id)a0 subtitle:(id)a1;
+ (id)cellWithText:(id)a0 accessoryType:(long long)a1;
+ (id)cellWithText:(id)a0 accessoryType:(long long)a1 accessoryTarget:(id)a2 accessoryAction:(SEL)a3;
+ (id)cellWithTitle:(id)a0 subtitle:(id)a1 accessoryType:(long long)a2 accessoryTarget:(id)a3 accessoryAction:(SEL)a4;
+ (id)cellWithTitle:(id)a0 subtitle:(id)a1 accessoryType:(long long)a2 accessoryTarget:(id)a3 accessoryAction:(SEL)a4 pathKey:(id)a5;
+ (id)cellWithTitle:(id)a0 rightSubtitle:(id)a1 accessoryType:(long long)a2 accessoryTarget:(id)a3 accessoryAction:(SEL)a4;
+ (id)cellWithDescription:(id)a0;
+ (id)cellWithTitle:(id)a0 subtitle:(id)a1 image:(id)a2;

- (void).cxx_destruct;

@end
