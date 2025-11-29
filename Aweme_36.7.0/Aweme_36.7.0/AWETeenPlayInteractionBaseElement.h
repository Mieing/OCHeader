@class NSHashTable, AWEAwemeModel;

@interface AWETeenPlayInteractionBaseElement : AWEBaseElement

@property (retain, nonatomic) AWEAwemeModel *model;
@property (weak, nonatomic) NSHashTable *allElements;

- (void)updateAllElement;
- (void).cxx_destruct;
- (void)setData:(id)a0;
- (id)context;

@end
