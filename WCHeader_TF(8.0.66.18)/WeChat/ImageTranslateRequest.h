@class UIImage, OCRTransResultViewController, OCRTransReport;

@interface ImageTranslateRequest : NSObject

@property (retain, nonatomic) OCRTransReport *statInfo;
@property (retain, nonatomic) UIImage *image;
@property (retain, nonatomic) OCRTransResultViewController *transResultViewController;
@property (copy, nonatomic) id /* block */ callBack;
@property (copy, nonatomic) id /* block */ finishBlock;

- (void)execute;
- (void)onHandleTranslateFinish:(id)a0 cgiWrap:(id)a1 context:(id)a2 statInfo:(id)a3;
- (void)onHandleRequestFinish:(long long)a0 image:(id)a1 statInfo:(id)a2;
- (void).cxx_destruct;

@end
