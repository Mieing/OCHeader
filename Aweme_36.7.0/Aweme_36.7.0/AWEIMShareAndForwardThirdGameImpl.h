@class NSString, AWEIMMessage;
@protocol IESIMShareContextProtocol;

@interface AWEIMShareAndForwardThirdGameImpl : NSObject <AWEIMShareAndForwardToChatProtocol>

@property (copy, nonatomic) NSString *friendCntStr;
@property (nonatomic) BOOL forbidToast;
@property (retain, nonatomic) id<IESIMShareContextProtocol> shareContext;
@property (retain, nonatomic) AWEIMMessage *forwardMessage;
@property (copy, nonatomic) NSString *accessoryText;
@property (copy, nonatomic) NSString *createGroupEnterFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)extraTrackInfo;
- (id)businessModelFromIMSetting;
- (void)saveBusinessModelToIMSetting;
- (void)clearBusinessModelFromIMSetting;
- (void)configShareBottomInputViewWithCoverImageView:(id)a0;
- (void)configShareAlertTopView:(id)a0 withCoverImageView:(id)a1 contentLabel:(id)a2;
- (id)shareMessage;
- (void)dismissByUser:(BOOL)a0;
- (void)trackBackflowWithStatusCode:(unsigned long long)a0 transferBack:(BOOL)a1;
- (void)willShowShareSuccessView;
- (void)viewDidAppear:(id)a0 withShareList:(id)a1;
- (void)updateFrienCntInfoWith:(id)a0 friendContacts:(id)a1 allContacts:(id)a2;
- (void)didSelectShareUser:(id)a0 inVC:(id)a1;
- (void)willShareToShareUserList:(id)a0 shareText:(id)a1;
- (void)configCoverImageView:(id)a0 withIconUrl:(id)a1 desc:(id)a2;
- (id)gameInvitationModel;
- (void)trackWithEventType:(id)a0;
- (id)commomTrackParams;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
