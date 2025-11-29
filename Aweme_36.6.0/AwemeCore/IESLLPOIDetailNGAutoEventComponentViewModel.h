@class NSArray, LLDitoGeneralContainerPageContext;

@interface IESLLPOIDetailNGAutoEventComponentViewModel : LLDitoComponentViewModel

@property (readonly, nonatomic) LLDitoGeneralContainerPageContext *generalContext;
@property (copy, nonatomic) NSArray *nodeEventList;

- (void)retryLoadData;
- (void)bindStateAndAction;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;
- (void)dispatchEvent;

@end
