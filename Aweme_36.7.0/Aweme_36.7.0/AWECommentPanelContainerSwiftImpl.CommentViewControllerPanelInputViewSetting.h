@class NSArray;

@interface AWECommentPanelContainerSwiftImpl.CommentViewControllerPanelInputViewSetting : NSObject <AWECommentViewControllerInputViewSettingProtocol> {
    void /* function */ imageLocalURLs;
    void /* unknown type, empty encoding */ context;
}

@property (nonatomic) unsigned long long beginInputSource;
@property (nonatomic) BOOL shouldShowDefaultText;
@property (nonatomic) BOOL shouldAutoRiseReplyInputView;
@property (nonatomic) BOOL isForcedToShowInputView;
@property (nonatomic) BOOL isForcedToShowInputViewSync;
@property (nonatomic) BOOL isFromClickEvent;
@property (nonatomic) unsigned long long replyTarget;
@property (nonatomic, copy) NSArray *imageLocalURLs;

- (void).cxx_destruct;
- (id)init;
- (id)inputController;

@end
