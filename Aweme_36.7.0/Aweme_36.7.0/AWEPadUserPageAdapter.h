@class NSString;

@interface AWEPadUserPageAdapter : NSObject <AWEPadUserPageAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)weakTargetClass;

- (void)performPadAction:(id /* block */)a0;
- (BOOL)enablePadStyle;
- (BOOL)enableRotateOnCustom;
- (double)cellWidthOnCollectionViewWidth:(double)a0;
- (double)cellHeightOnCollectionViewWidth:(double)a0;
- (double)cellItemSpacingOnWidth:(double)a0;
- (long long)numberOfCellsPerRowOnCollectionViewWidth:(double)a0;
- (unsigned long long)padStyleForWidth:(double)a0;
- (BOOL)enableUserPageSplitScreenWithReferString:(id)a0;
- (BOOL)enableUserPageSplitScreenOnlyJudgeReferString:(id)a0;
- (id)weakTarget;

@end
