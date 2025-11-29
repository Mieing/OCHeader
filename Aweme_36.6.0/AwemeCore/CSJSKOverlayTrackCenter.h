@class CSJAdInfoViewModel;

@interface CSJSKOverlayTrackCenter : NSObject

@property (retain, nonatomic) CSJAdInfoViewModel *infoModel;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)shareInstance;

- (void)storeOverlayDidClick;
- (void)storeOverlayDidClickGet;
- (void)storeOverlayDidFailToLoadWithError:(id)a0;
- (void)storeOverlayDidFinishPresentation;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
