@interface CJPayWebViewBlankDetect : NSObject

+ (BOOL)calculateIsPureColor:(char *)a0 dataLength:(long long)a1 customColorDiff:(long long)a2;
+ (BOOL)imageIsPureColor:(id)a0 customColorDiff:(long long)a1;
+ (void)blankDetectionWithWebView:(id)a0 context:(id)a1;
+ (void)snapshotWithWebView:(id)a0 completion:(id /* block */)a1;

@end
