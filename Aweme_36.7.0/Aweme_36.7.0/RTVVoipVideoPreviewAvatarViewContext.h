@class RTVVoipParticipator;

@interface RTVVoipVideoPreviewAvatarViewContext : NSObject

@property (readonly, nonatomic) RTVVoipParticipator *participator;
@property (readonly, nonatomic) BOOL simpleAppearance;
@property (readonly, copy, nonatomic) id /* block */ nickNameShouldShow;
@property (nonatomic) BOOL isNeedHideOtherDescribe;

- (id)initWithParticipator:(id)a0;
- (id)initWithParticipator:(id)a0 simpleAppearance:(BOOL)a1;
- (id)initWithParticipator:(id)a0 simpleAppearance:(BOOL)a1 nickNameShouldShow:(id /* block */)a2;
- (void).cxx_destruct;

@end
