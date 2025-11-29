@class DitoGeneralContainerPageContext, NSArray;

@interface AWEPOIDetailNGAutoEventComponentViewModel : DitoComponentViewModel

@property (readonly, nonatomic) DitoGeneralContainerPageContext *generalContext;
@property (copy, nonatomic) NSArray *nodeEventList;

- (void)retryLoadData;
- (void)bindStateAndAction;
- (void).cxx_destruct;
- (id)initWithNode:(id)a0;
- (void)dispatchEvent;

@end
