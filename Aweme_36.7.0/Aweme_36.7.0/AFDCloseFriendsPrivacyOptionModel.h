@class NSString, UIImage;

@interface AFDCloseFriendsPrivacyOptionModel : NSObject

@property (copy, nonatomic) NSString *subTitle;
@property (nonatomic) long long numberOfVisibleUsers;
@property (retain, nonatomic) NSString *visibilityTitle;
@property (retain, nonatomic) UIImage *iconImage;
@property (nonatomic) BOOL isSelected;
@property (nonatomic) BOOL cellClickable;
@property (copy, nonatomic) id /* block */ handleCellClickedBlock;
@property (nonatomic) long long visibleStatus;

- (void).cxx_destruct;

@end
