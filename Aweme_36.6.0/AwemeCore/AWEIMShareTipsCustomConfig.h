@class NSDictionary, NSString;
@protocol AWEIMShareAndForwardToChatProtocol;

@interface AWEIMShareTipsCustomConfig : NSObject

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) id<AWEIMShareAndForwardToChatProtocol> shareImpl;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (nonatomic) BOOL directOpenNewCreateGroupConversation;
@property (nonatomic) double delayTime;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *buttonTitle;
@property (retain, nonatomic) NSString *schema;
@property (nonatomic) BOOL forbidPitayaTrigerAnotherPushGuidePopUp;
@property (nonatomic) BOOL enableMultiAvatars;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (nonatomic) BOOL shouldUseTabBarHeightToLayout;
@property (retain, nonatomic) NSString *successToast;

- (void).cxx_destruct;
- (id)init;

@end
