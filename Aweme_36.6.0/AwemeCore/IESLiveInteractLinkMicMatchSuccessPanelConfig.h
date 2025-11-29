@class NSString, HTSLiveImage, NSArray;

@interface IESLiveInteractLinkMicMatchSuccessPanelConfig : NSObject

@property (retain, nonatomic) HTSLiveImage *avatarImage;
@property (retain, nonatomic) NSString *name;
@property (nonatomic) unsigned long long gender;
@property (copy, nonatomic) NSArray *tagStrings;
@property (nonatomic) unsigned long long scene;
@property (nonatomic) BOOL enableCountdown;
@property (nonatomic) long long countdownInSec;
@property (nonatomic) BOOL isLinkUsersExposedStyle;
@property (copy, nonatomic) NSArray *linkUserAvatarURLs;

- (void).cxx_destruct;
- (id)init;

@end
