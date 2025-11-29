@interface IESLLPOIPadAdapterManager : NSObject

@property (nonatomic) double contentWidth;

+ (BOOL)shouldBeAdaptedToPad;
+ (id)sharedManager;

- (id)bizGlobalParamsWithParams:(id)a0;
- (void)updateContentWidthWithContainerWidth:(double)a0 isPadSplitting:(BOOL)a1;
- (id)init;

@end
