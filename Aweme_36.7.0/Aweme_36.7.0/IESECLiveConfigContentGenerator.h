@interface IESECLiveConfigContentGenerator : NSObject

+ (id)createContentsViewByContentModels:(id)a0 delegate:(id)a1;
+ (void)updateContentsView:(id)a0 byContentModels:(id)a1;
+ (id)generateAttributedStringWithText:(id)a0 textFont:(id)a1 textColor:(id)a2;
+ (id)configWithVibeContents:(id)a0 font:(id)a1 height:(double)a2 delegate:(id)a3;
+ (id)generateElementViewWithContent:(id)a0 font:(id)a1 delegate:(id)a2;
+ (void)p_generateConstraintFor:(id)a0 lastView:(id)a1 baseView:(id)a2;
+ (id)checkContents:(id)a0 equalToContent:(id)a1;
+ (void)updateElementViewConstraint:(id)a0 contents:(id)a1 font:(id)a2 delegate:(id)a3;
+ (void)p_labelTextAdaptMaxWidth:(id)a0 superView:(id)a1 maxWidth:(id)a2;

@end
