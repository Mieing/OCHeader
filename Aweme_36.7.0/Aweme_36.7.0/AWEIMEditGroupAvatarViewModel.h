@class AWEIMMessageConversation, NSString, UIImage, UIViewController;
@protocol IESIMGroupAvatarCropViewControllerProtocol;

@interface AWEIMEditGroupAvatarViewModel : NSObject

@property (retain, nonatomic) UIImage *imageUploading;
@property (copy, nonatomic) NSString *imageSourceForTracking;
@property (retain, nonatomic) UIViewController<IESIMGroupAvatarCropViewControllerProtocol> *cropVC;
@property (retain, nonatomic) AWEIMMessageConversation *conversation;
@property (nonatomic) unsigned long long groupAvatarSource;
@property (nonatomic) BOOL shouldNotTransferToSetting;
@property (nonatomic) unsigned long long aweim_naviBarType;

- (void)beginEditingGroupAvatar;
- (void)beginEditingGroupAvatarWithTopNavigationController:(id)a0 isNeedPreview:(BOOL)a1;
- (void)beginEditingGroupAvatarWithTopNavigationController:(id)a0;
- (void)__uploadImage:(id)a0;
- (void)p_closeVCAndFakeWriteGroupAvatar:(BOOL)a0;
- (void).cxx_destruct;
- (id)initWithConversation:(id)a0;

@end
