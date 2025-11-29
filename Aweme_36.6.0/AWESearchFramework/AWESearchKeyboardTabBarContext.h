@class NSString, NSDictionary, UIView;
@protocol AWESearchKeyboardVoiceSearchDelegate, AWESearchKeyboardAISearchDelegate;

@interface AWESearchKeyboardTabBarContext : NSObject

@property (nonatomic) long long pageType;
@property (nonatomic) long long positionType;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSDictionary *historyConfig;
@property (nonatomic) long long themeStyle;
@property (weak, nonatomic) UIView *topView;
@property (nonatomic) double keyBoardHeight;
@property (weak, nonatomic) id<AWESearchKeyboardVoiceSearchDelegate> voiceSearchDelegate;
@property (weak, nonatomic) id<AWESearchKeyboardAISearchDelegate> aiSearchDelegate;

- (void).cxx_destruct;

@end
