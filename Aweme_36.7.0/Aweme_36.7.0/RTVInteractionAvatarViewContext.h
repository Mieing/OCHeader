@class RTVVoipParticipator, UIColor, NSNumber;

@interface RTVInteractionAvatarViewContext : NSObject

@property (readonly, nonatomic) RTVVoipParticipator *participator;
@property (readonly, nonatomic) unsigned long long audioIndicatorLayoutStyle;
@property (readonly, nonatomic) BOOL blurred;
@property (nonatomic) BOOL animated;
@property (nonatomic) double avatarBorderWidth;
@property (retain, nonatomic) UIColor *avatarBorderColor;
@property (retain, nonatomic) NSNumber *alphaDivisor;
@property (retain, nonatomic) UIColor *audioIndicatorBorderCorlor;
@property (retain, nonatomic) NSNumber *audioIndicatorMargin;
@property (nonatomic) BOOL enableAvatarOuterBorder;

- (void)updateAudioIndicatorLayoutStyle:(unsigned long long)a0;
- (void)updateBlurred:(BOOL)a0;
- (id)initWithParticipant:(id)a0;
- (void).cxx_destruct;

@end
