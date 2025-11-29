@class NSString;

@interface WCPayC2CFestivalMsgViewModel : CommonMessageViewModel

@property (readonly, nonatomic) NSString *descText;

+ (BOOL)canCreateMessageViewModelWithMessageWrap:(id)a0;

- (id)cellViewClassName;
- (struct CGSize { double x0; double x1; })measureContentViewSize:(struct CGSize { double x0; double x1; })a0;
- (BOOL)isHKNewYearBubble;
- (id)getBottomSource;
- (long long)getAudioPlayTime;
- (BOOL)isBubbleBeHandled;
- (id)getBackgroundImage;
- (id)getBackgroundImageHL;
- (id)accessibilityMessageType;

@end
