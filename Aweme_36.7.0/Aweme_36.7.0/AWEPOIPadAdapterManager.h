@interface AWEPOIPadAdapterManager : NSObject

@property (nonatomic) double contentWidth;

+ (Class)aAWEPadBizUIAdapterClass;
+ (BOOL)shouldBeAdaptedToPad;
+ (id)sharedManager;

- (id)aAWEPadBizUIAdapter;
- (id)bizGlobalParamsWithParams:(id)a0;
- (void)updateContentWidthWithContainerWidth:(double)a0 isPadSplitting:(BOOL)a1;
- (id)init;

@end
