@class UIImageView, AWEIMMessage, NSString;
@protocol IESIMShareContextProtocol;

@interface AWEIMShareAndForwardShopImpl : NSObject <AWEIMShareAndForwardToChatProtocol>

@property (retain, nonatomic) UIImageView *iconImageView;
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
- (id)messageTypeForShareTrack;
- (void)willTransferToShareListVC:(id)a0;
- (void)didSelectShareUser:(id)a0 inVC:(id)a1;
- (void)didShareToShareUserList:(id)a0;
- (id)shareTypeWithIMShareModelType:(long long)a0;
- (void)p_setECommerceContentLabelText:(id)a0 sub:(id)a1 alertTopView:(id)a2 contentLabel:(id)a3 coverImageView:(id)a4;
- (id)shopOwnerModel;
- (void).cxx_destruct;

@end
