@class UIColor, NSString, NSDictionary, AWECodeGenPickUserModel, AWEAwemeModel, NSArray;

@interface AWEPickPanelUserCellViewModel : NSObject

@property (retain, nonatomic) AWECodeGenPickUserModel *pickUserModel;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSArray *avatarURLList;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *relationTagText;
@property (copy, nonatomic) UIColor *relationTagTextColor;
@property (copy, nonatomic) UIColor *relationTagBackgroundColor;
@property (copy, nonatomic) NSString *timestampStr;
@property (nonatomic) BOOL isPicked;

- (id)diffIdentifierKey;
- (void)handleEnterProfileViewTap;
- (id)initWithPickUserModel:(id)a0;
- (void)trackClickGeneralParams;
- (void).cxx_destruct;
- (id)init;
- (void)setupData;

@end
