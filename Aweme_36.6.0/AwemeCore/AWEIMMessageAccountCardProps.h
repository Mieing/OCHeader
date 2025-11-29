@class NSURL, NSString, AWEIMMessage;

@interface AWEIMMessageAccountCardProps : AWEIMUIViewPresenterProps

@property (copy, nonatomic) id /* block */ tapAvatarViewBlock;
@property (retain, nonatomic) NSURL *avatarURL;
@property (copy, nonatomic) NSString *nickname;
@property (nonatomic) BOOL hasBackground;
@property (nonatomic) BOOL backgroundImageIsBright;
@property (retain, nonatomic) AWEIMMessage *message;

- (void).cxx_destruct;

@end
