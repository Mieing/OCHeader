@class NSString, AWEUserModel;
@protocol AFDColorRingFacadeProtocol, AWEIMActiveUserInfoService;

@interface AWEMateListSimpleCellBusinessModel : NSObject <AWEUserListGeneralCellBusinessModelProtocol>

@property (retain, nonatomic) AWEUserModel *userModel;
@property (retain, nonatomic) NSString *activeStatusIdentifier;
@property (retain, nonatomic) id<AFDColorRingFacadeProtocol> colorRingFacade;
@property (retain, nonatomic) id<AWEIMActiveUserInfoService> activeInfo;
@property (copy, nonatomic) id /* block */ refreshBlock;

+ (double)suggestedHeight;

- (id)referString;
- (id)enterFrom;
- (id)enterMethod;
- (BOOL)trackColorRingShow;
- (id)subTitleTextColor;
- (void)didEndDisplayingCell;
- (BOOL)isFriends;
- (unsigned long long)activeUserSourceType;
- (void)onDidBindToCellWithRefreshBlock:(id /* block */)a0;
- (void)didBindToColorRingView:(id)a0;
- (void)onActiveInfoDidUpdated:(id)a0;
- (BOOL)shouldShowVerifiedIcon;
- (BOOL)shouldMonitorActiveStatus;
- (BOOL)shouldShowRelationButton;
- (BOOL)shouldShowMoreActionButton;
- (BOOL)shouldShowBottomLineView;
- (id /* block */)bigFontAutoFontSizeBlock;
- (id)lightInteractionExtraParams;
- (id)lightActionSource;
- (id)initWithUserModel:(id)a0 activeStatusIdentifier:(id)a1;
- (void).cxx_destruct;
- (id)subTitle;
- (id)accountType;
- (id)title;
- (double)avatarSize;
- (id)pageIdentifier;
- (void)willDisplay;

@end
