@class NSString, NSDictionary, UIImage, LSIMBizMessage;

@interface LSIMMessageImageCellVM : LSIMChatDetailBaseCellVM <LSIMMessageImageCellVM>

@property (copy, nonatomic) NSString *imageURI;
@property (copy, nonatomic) NSString *imageURL;
@property (nonatomic) double width;
@property (nonatomic) double height;
@property (retain, nonatomic) UIImage *sendImage;
@property (nonatomic) double sendProgress;
@property (nonatomic) BOOL isRequestOnAir;
@property (nonatomic) BOOL imageUploadSucceed;
@property (copy, nonatomic) NSDictionary *encryptImageInfo;
@property (readonly, nonatomic) BOOL isEncryptImage;
@property (readonly, nonatomic) LSIMBizMessage *message;
@property (readonly, nonatomic) unsigned long long combineStyle;
@property (readonly, nonatomic) BOOL shouldShowTopTime;
@property (readonly, nonatomic) double createTime;
@property (readonly, nonatomic) BOOL isSystemMessage;
@property (readonly, nonatomic) BOOL isRobotMessage;
@property (readonly, nonatomic) BOOL isSelfSide;
@property (readonly, nonatomic) BOOL isMerchantUser;
@property (readonly, nonatomic) BOOL hasAvatar;
@property (readonly, nonatomic) BOOL shouldShowAvatar;
@property (readonly, copy, nonatomic) NSString *avatarURLString;
@property (readonly, nonatomic) BOOL shouldShowUserInfo;
@property (readonly, copy, nonatomic) NSString *userName;
@property (readonly, copy, nonatomic) NSString *userTagString;
@property (readonly, nonatomic) BOOL shouldShowFooter;
@property (readonly, nonatomic) unsigned long long footerStyle;
@property (readonly, nonatomic) long long messageStatus;
@property (nonatomic) unsigned long long readStatus;
@property (readonly, nonatomic) unsigned long long userMsgFooterStatus;
@property (readonly, nonatomic) BOOL shouldShowRiskContent;
@property (readonly, copy, nonatomic) NSString *riskContent;
@property (readonly, nonatomic) BOOL isRecalled;
@property (readonly, copy, nonatomic) NSDictionary *originExtDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)needCustomRecalled;
- (void)resendIMMessage;
- (void)handleMessage;
- (void)sendIMMessage;
- (void)originExtDictDidUpdated;
- (void)updateRecalledContentIfNeed;
- (void)p_requestImageURL;
- (void)requestImageURLWithURI:(id)a0 encrypt:(BOOL)a1 completion:(id /* block */)a2;
- (void)techTrackImageUpload;
- (void)techTrackImageUploadResult:(id)a0;
- (void)p_sendIMMessage;
- (void)monitorSendMessageWithIsResend:(BOOL)a0;
- (void).cxx_destruct;

@end
