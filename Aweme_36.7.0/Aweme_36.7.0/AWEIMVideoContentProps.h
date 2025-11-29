@class UIImage, AWEIMMessage;

@interface AWEIMVideoContentProps : AWEIMUIViewPresenterProps

@property (retain, nonatomic) UIImage *coverImage;
@property (copy, nonatomic) id /* block */ coverTapAction;
@property (copy, nonatomic) id /* block */ coplayTapAction;
@property (nonatomic) BOOL isDisplayInQuoteReply;
@property (retain, nonatomic) AWEIMMessage *message;
@property (nonatomic) BOOL coplayViewHidden;
@property (nonatomic) BOOL enableJoinCoplayAction;
@property (nonatomic) unsigned long long coplayPosition;
@property (copy, nonatomic) id /* block */ didSetImageBlock;
@property (nonatomic) BOOL needFold;
@property (nonatomic) double quotedRadius;
@property (nonatomic) double foldedRadius;
@property (nonatomic) double bottomShieldHeight;

- (void).cxx_destruct;

@end
