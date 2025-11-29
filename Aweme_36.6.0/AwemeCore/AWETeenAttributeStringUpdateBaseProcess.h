@class AWEAwemeModel, AWETeenDescriptionContext, AWETeenPlayInteractionContext, AWETeenPlayInteractionDescriptionElementViewModel;

@interface AWETeenAttributeStringUpdateBaseProcess : NSObject

@property (retain, nonatomic) AWETeenPlayInteractionDescriptionElementViewModel *viewModel;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (retain, nonatomic) AWETeenPlayInteractionContext *context;
@property (retain, nonatomic) AWETeenDescriptionContext *descriptionContext;
@property (nonatomic) unsigned long long type;
@property (nonatomic) unsigned long long stringMode;

- (id)attributeStringUpdateProcess;
- (id)markBeforeModify:(id)a0 withAttributeStringMode:(unsigned long long)a1;
- (id)handleDescriptionAttributeString:(id)a0 withAttributeName:(id)a1;
- (void).cxx_destruct;

@end
