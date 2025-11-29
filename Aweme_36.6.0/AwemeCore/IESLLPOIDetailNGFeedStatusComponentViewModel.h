@class LLDitoGeneralContainerPageContext;

@interface IESLLPOIDetailNGFeedStatusComponentViewModel : LLDitoComponentViewModel

@property (readonly, nonatomic) LLDitoGeneralContainerPageContext *generalContext;
@property (nonatomic) BOOL forceLight;
@property (nonatomic) unsigned long long loadingStyle;
@property (nonatomic) BOOL showFeedStatus;

- (void)bindStateAndAction;
- (struct CGSize { double x0; double x1; })componentSizeWithMaxWidth:(double)a0;
- (double)componentHeightWithState;
- (id)initWithNode:(id)a0;

@end
