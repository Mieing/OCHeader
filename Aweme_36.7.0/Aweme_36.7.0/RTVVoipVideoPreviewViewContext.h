@class RTVVoipParticipator, NSOrderedSet;

@interface RTVVoipVideoPreviewViewContext : NSObject

@property (nonatomic) BOOL isInLastRow;
@property (readonly, nonatomic) RTVVoipParticipator *participator;
@property (readonly, nonatomic) NSOrderedSet *allParticipators;
@property (readonly, nonatomic) BOOL isApparent;
@property (nonatomic) BOOL isNeedHideOtherDescribe;
@property (nonatomic) BOOL shouldShowAvatarWhenApparentAndDisplayVideo;
@property (readonly, copy, nonatomic) id /* block */ nickNameShouldShow;

- (id)initWithParticipator:(id)a0;
- (id)initWithParticipator:(id)a0 inLastRow:(BOOL)a1 apparent:(BOOL)a2 nickNameShouldShow:(id /* block */)a3;
- (id)initWithParticipator:(id)a0 nickNameShouldShow:(id /* block */)a1;
- (void)updateInLastRow:(BOOL)a0;
- (id)initWithParticipator:(id)a0 inLastRow:(BOOL)a1 apparent:(BOOL)a2;
- (void).cxx_destruct;

@end
