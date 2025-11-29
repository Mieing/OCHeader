@class NSString;

@interface AWETransformerEngine : NSObject

@property (copy, nonatomic) NSString *requestID;

+ (id)version;
+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (id)allCardTemplateDictsWithDSLString:(id)a0;
- (struct CGSize { double x0; double x1; })caculateTransformerSizeWithRootElement:(id)a0;
- (id)transformerCardElementWithJSONString:(id)a0;
- (id)transformerElementWithDSLJSONString:(id)a0 globalParams:(id)a1;
- (id)transformerRootViewWithRootElement:(id)a0;
- (id)transformerRootViewWithRootElement:(id)a0 cardCache:(id)a1 delegate:(id)a2;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
