@class NSHashTable;

@interface ButtonAttachManager : NSObject

@property (retain, nonatomic) NSHashTable *attachedButtons;
@property (nonatomic) double maxButtonWidth;

- (id)init;
- (void)attachButton:(id)a0;
- (void)detachButton:(id)a0;
- (void)setNeedsTrigger;
- (void)forceTrigger;
- (void)trigger;
- (void).cxx_destruct;

@end
