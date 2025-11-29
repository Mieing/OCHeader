@class NSDictionary, UIViewController, AWEShareContext;

@interface AWEQRCodeOptionsModel : AWEBaseApiModel

@property (nonatomic) unsigned long long codeType;
@property (nonatomic) BOOL enableShare;
@property (nonatomic) BOOL enableDragToClose;
@property (retain, nonatomic) AWEShareContext *shareContext;
@property (retain, nonatomic) UIViewController *fromController;
@property (retain, nonatomic) NSDictionary *trackDict;

- (void).cxx_destruct;

@end
