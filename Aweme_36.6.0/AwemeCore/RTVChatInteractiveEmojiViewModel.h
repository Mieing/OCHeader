@class NSString;

@interface RTVChatInteractiveEmojiViewModel : NSObject

@property (nonatomic) long long emoticonType;
@property (copy, nonatomic) NSString *animatedImagePath;
@property (copy, nonatomic) NSString *userID;
@property (copy, nonatomic) NSString *animateUrl;
@property (copy, nonatomic) NSString *staticUrl;
@property (readonly, copy, nonatomic) NSString *animationName;
@property (readonly, nonatomic) BOOL shouldShowAvatar;

- (void)updateShouldShowAvatar:(BOOL)a0;
- (void)updateAnimationImagePath:(id)a0;
- (void)updateAnimationName:(id)a0;
- (void).cxx_destruct;

@end
