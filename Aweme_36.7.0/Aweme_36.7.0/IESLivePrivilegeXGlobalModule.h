@class NSString, IESLiveImageCropServiceImpl, IESLiveEmojiCreateServiceImpl;

@interface IESLivePrivilegeXGlobalModule : IESLiveModule <IESLivePrivilegeXGlobalModule>

@property (retain, nonatomic) IESLiveImageCropServiceImpl *imageCropServiceImpl;
@property (retain, nonatomic) IESLiveEmojiCreateServiceImpl *emojiCreateServiceImpl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)imageCropService;
- (id)emojiCreateServeice;
- (void).cxx_destruct;

@end
