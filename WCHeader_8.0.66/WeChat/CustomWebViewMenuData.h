@class NSString, UIImage, NSArray;

@interface CustomWebViewMenuData : NSObject

@property (retain, nonatomic) NSString *mainMenuID;
@property (retain, nonatomic) NSString *mainMenuIconImageName;
@property (retain, nonatomic) UIImage *mainMenuIconImage;
@property (retain, nonatomic) NSString *mainMenuUrl;
@property (retain, nonatomic) NSString *mainMenuTitle;
@property (nonatomic) unsigned long long mainMenuActionType;
@property (retain, nonatomic) NSArray *menuItems;
@property (retain, nonatomic) NSArray *domains;

- (BOOL)shouldShowCustomizeMenuWithUrl:(id)a0;
- (void).cxx_destruct;

@end
