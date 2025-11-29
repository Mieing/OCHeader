@class NSDictionary;

@interface AWEIMInteractiveEmojiMatchModel : NSObject

@property (retain, nonatomic) NSDictionary *emojiIDsToRelations;
@property (retain, nonatomic) NSDictionary *singleEmojiIDToRelations;

+ (id)transferResourceModelsToRelations:(id)a0;

- (id)initWithSpecialResourceModels:(id)a0;
- (void)p_phaseResourceConfigModels:(id)a0;
- (void)p_phaseRelationModels:(id)a0;
- (void).cxx_destruct;

@end
