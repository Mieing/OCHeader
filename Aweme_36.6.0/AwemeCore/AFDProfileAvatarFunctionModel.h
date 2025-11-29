@class UIColor, NSString, NSArray, UIImage;

@interface AFDProfileAvatarFunctionModel : NSObject

@property (nonatomic) long long type;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) BOOL hasSeparatorLine;
@property (nonatomic) BOOL hiddenNextView;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *message;
@property (retain, nonatomic) UIColor *titleColor;
@property (retain, nonatomic) UIImage *normalIcon;
@property (retain, nonatomic) UIImage *selectedIcon;
@property (retain, nonatomic) NSArray *noramlIconURLs;

- (void).cxx_destruct;

@end
