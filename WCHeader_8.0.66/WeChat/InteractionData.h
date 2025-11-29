@class NSMutableArray;

@interface InteractionData : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *interactionItems;
@property (nonatomic) unsigned int memberFlag;
@property (nonatomic) unsigned int followFlag;

+ (void)initialize;

- (void)setFollowFlag:(unsigned int)a0;
- (unsigned int)followFlag;
- (void)setMemberFlag:(unsigned int)a0;
- (unsigned int)memberFlag;
- (void)setInteractionItems:(id)a0;
- (id)interactionItems;

@end
