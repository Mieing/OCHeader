@class AWEIMMessage, NSMutableSet, NSString;
@protocol IESIMShareContextProtocol;

@interface AWEIMShareAndForwardEncryptImageImpl : NSObject <AWEIMShareAndForwardToChatProtocol>

@property (retain, nonatomic) NSMutableSet *secIDSet;
@property (retain, nonatomic) NSMutableSet *sessionIDSet;
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
- (void)didSelectShareUser:(id)a0 inVC:(id)a1;
- (void)willShareToShareUserList:(id)a0 shareText:(id)a1;
- (void)didShareToShareUserList:(id)a0;
- (void)showCustomTipsAfterSendMessagesWithShareUserList:(id)a0 config:(id)a1;
- (void)completionShareResult:(unsigned long long)a0 toShareModels:(id)a1;
- (id)p_image;
- (id)imageModel;
- (void).cxx_destruct;

@end
