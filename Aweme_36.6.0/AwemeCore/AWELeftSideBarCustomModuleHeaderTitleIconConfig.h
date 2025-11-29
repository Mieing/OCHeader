@class NSString, AWELeftSideBarIconUrlArrayDataModel, UIImage;

@interface AWELeftSideBarCustomModuleHeaderTitleIconConfig : NSObject

@property (retain, nonatomic) AWELeftSideBarIconUrlArrayDataModel *iconModel;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (copy, nonatomic) NSString *iconAccessibilityLabel;
@property (retain, nonatomic) UIImage *placeHoldImage;

- (void).cxx_destruct;

@end
