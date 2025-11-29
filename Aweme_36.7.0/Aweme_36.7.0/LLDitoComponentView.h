@class NSString, LLDitoPageContext;

@interface LLDitoComponentView : UIView <LLDitoComponentView>

@property (nonatomic) BOOL shouldIgnoreByFMP;
@property (copy, nonatomic) NSString *innerId;
@property (weak, nonatomic) LLDitoPageContext *context;
@property (nonatomic) BOOL emptyView;
@property (nonatomic) BOOL isSticked;
@property (nonatomic) BOOL isSubviewSticky;
@property (readonly) NSString *identifier;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)updateViewModel:(id)a0;
- (void)startHighlightViewWithColor:(id)a0 delay:(double)a1 duration:(double)a2;
- (id)subviewForSticky;
- (void)setInnerIdentifier:(id)a0;
- (void).cxx_destruct;

@end
