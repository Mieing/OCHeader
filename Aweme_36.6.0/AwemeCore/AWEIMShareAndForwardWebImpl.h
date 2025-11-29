@class AWEIMMessage, NSString, NSMutableDictionary, AWEIMShareWebViewModel;
@protocol IESIMShareContextProtocol;

@interface AWEIMShareAndForwardWebImpl : NSObject <AWEIMShareAndForwardToChatProtocol>

@property (retain, nonatomic) AWEIMShareWebViewModel *webViewModel;
@property (retain, nonatomic) AWEIMMessage *immessage;
@property (retain, nonatomic) NSString *additionText;
@property (retain, nonatomic) NSMutableDictionary *sendMultiMessageDict;
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
- (void)willTransferToShareListVC:(id)a0;
- (void)didSelectShareUser:(id)a0 inVC:(id)a1;
- (void)didShareToShareUserList:(id)a0;
- (id)shareTypeWithIMShareModelType:(long long)a0;
- (id)coverPlaceholderImageWithDarkSharePanel:(BOOL)a0;
- (void)updateWebViewModelIfNeed;
- (BOOL)isBulletMessage;
- (id)shareText;
- (void).cxx_destruct;
- (void)setShareText:(id)a0;

@end
