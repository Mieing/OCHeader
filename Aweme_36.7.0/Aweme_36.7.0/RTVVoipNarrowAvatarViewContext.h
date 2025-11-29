@class NSArray;

@interface RTVVoipNarrowAvatarViewContext : NSObject

@property (readonly, copy, nonatomic) NSArray *voipParticipators;
@property (nonatomic) BOOL needShadow;

- (id)initWithParticipators:(id)a0;
- (void).cxx_destruct;

@end
