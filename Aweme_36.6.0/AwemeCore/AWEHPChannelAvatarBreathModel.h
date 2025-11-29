@class NSArray, UIColor;

@interface AWEHPChannelAvatarBreathModel : AWEHPBaseComponentModel

@property (copy, nonatomic) NSArray *avatarURLList;
@property (retain, nonatomic) UIColor *tagFromColor;
@property (retain, nonatomic) UIColor *tagToColor;
@property (nonatomic) BOOL needLiveTag;

- (void).cxx_destruct;

@end
