@class IESIMGrowingTextView, NSArray, NSDictionary, NSString, NSAttributedString;
@protocol IESIMMessageExternalRefContextProvider;

@interface AWEIMSendMessageContext : NSObject

@property (retain, nonatomic) NSAttributedString *content;
@property (retain, nonatomic) NSArray *mentionUsers;
@property (retain, nonatomic) NSDictionary *userInfo;
@property (retain, nonatomic) NSString *quotedMessageId;
@property (retain, nonatomic) id<IESIMMessageExternalRefContextProvider> externalRefContextProvider;
@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSString *toast;
@property (retain, nonatomic) NSDictionary *trackParams;
@property (nonatomic) long long sendFrom;
@property (nonatomic) BOOL isClickWatchOnce;
@property (retain, nonatomic) IESIMGrowingTextView *textView;
@property (nonatomic) BOOL isFromActionBar;

- (void).cxx_destruct;

@end
