@class NSString, NSArray, WKWebView, NSNumber;

@interface BDNativeWebBaseComponent : NSObject

@property (copy, nonatomic) NSString *iFrameID;
@property (weak, nonatomic) WKWebView *webView;
@property (retain, nonatomic) NSNumber *tagId;
@property (retain, nonatomic) NSArray *radiusNums;

+ (id)nativeTagName;
+ (id)nativeTagVersion;

- (void)fireComponentAction:(id)a0 params:(id)a1;
- (id)insertInNativeContainerObject:(id)a0 params:(id)a1;
- (void)updateInNativeContainerObject:(id)a0 params:(id)a1;
- (void)deleteInNativeContainerObject:(id)a0 params:(id)a1;
- (void)handleRadiusByRadiusNums:(id)a0 view:(id)a1;
- (void)handleBorderRadiusWithObject:(id)a0 params:(id)a1;
- (id)getRadiusNumsByStrs:(id)a0;
- (void)radiusView:(id)a0 topLeft:(double)a1 topRight:(double)a2 bottomRight:(double)a3 bottomLeft:(double)a4;
- (double)getRadiusByStr:(id)a0;
- (void)containerFrameChanged:(id)a0;
- (void)baseInsertInNativeContainerObject:(id)a0 params:(id)a1;
- (void)baseUpdateInNativeContainerObject:(id)a0 params:(id)a1;
- (void)baseDeleteInNativeContainerObject:(id)a0 params:(id)a1;
- (void)actionInNativeContainerObject:(id)a0 method:(id)a1 params:(id)a2 callback:(id /* block */)a3;
- (void).cxx_destruct;

@end
