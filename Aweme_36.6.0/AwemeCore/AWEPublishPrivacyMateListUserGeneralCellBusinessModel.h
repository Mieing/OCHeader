@class NSString, AWEUserModel;

@interface AWEPublishPrivacyMateListUserGeneralCellBusinessModel : NSObject <AWEUserListGeneralCellBusinessModelProtocol>

@property (retain, nonatomic) AWEUserModel *userModel;
@property (retain, nonatomic) NSString *pageIdentifier;

- (BOOL)shouldShowRelationTag;
- (BOOL)shouldMonitorActiveStatus;
- (BOOL)shouldShowRelationButton;
- (BOOL)shouldShowMoreActionButton;
- (BOOL)shouldShowBottomLineView;
- (void).cxx_destruct;
- (id)subTitle;
- (id)cellBackgroundColor;

@end
