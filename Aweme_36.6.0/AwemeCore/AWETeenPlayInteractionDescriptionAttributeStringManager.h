@class NSMutableAttributedString, AWEAwemeModel, AWETeenDescriptionContext, AWETeenPlayInteractionContext, NSMutableArray;

@interface AWETeenPlayInteractionDescriptionAttributeStringManager : NSObject

@property (retain, nonatomic) NSMutableArray *processArray;
@property (retain, nonatomic) AWEAwemeModel *currentModel;
@property (retain, nonatomic) AWETeenPlayInteractionContext *context;
@property (retain, nonatomic) AWETeenDescriptionContext *descriptionContext;
@property (retain, nonatomic) NSMutableAttributedString *attributedString;

- (id)handlingDescriptionAttributeStringWithModel:(id)a0 withContext:(id)a1 withDescriptionContext:(id)a2 withAttributeStringMode:(unsigned long long)a3 withString:(id)a4;
- (id)processListDictionary;
- (id)processArrayList;
- (void)addProcess:(id)a0 toArr:(id)a1;
- (id)handlingDescriptionAttributeStringWithModel:(id)a0 withContext:(id)a1 withDescriptionContext:(id)a2 withAttributeStringMode:(unsigned long long)a3;
- (void).cxx_destruct;

@end
