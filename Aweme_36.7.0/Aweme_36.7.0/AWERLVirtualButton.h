@class NSString, NSMutableDictionary, AWERLVirtualLabel;

@interface AWERLVirtualButton : AWERLVirtualView <AWERLVirtualViewOverride>

@property (retain, nonatomic) NSMutableDictionary *stateTitleDictionary;
@property (retain, nonatomic) NSMutableDictionary *stateTitleColorDictionary;
@property (retain, nonatomic) NSMutableDictionary *stateImageDictionary;
@property (retain, nonatomic) NSMutableDictionary *eventActionDictionary;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } contentEdgeInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } titleEdgeInsets;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } imageEdgeInsets;
@property (readonly, nonatomic) AWERLVirtualLabel *titleLabel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)registerAutoSyncAttributeKeyPathPairs:(id)a0;

- (struct CGSize { double x0; double x1; })layoutThatFits:(struct CGSize { double x0; double x1; })a0;
- (id)createViewToRender;
- (void)updateAttributesForRenderedView:(id)a0;
- (void).cxx_destruct;
- (void)setTitle:(id)a0 forState:(unsigned long long)a1;
- (id)initWithSize:(struct CGSize { double x0; double x1; })a0;
- (void)setImage:(id)a0 forState:(unsigned long long)a1;
- (id)init;
- (id)identifier;
- (void)setTitleColor:(id)a0 forState:(unsigned long long)a1;
- (void)addTarget:(id)a0 action:(SEL)a1 forControlEvents:(unsigned long long)a2;

@end
