@class NSString, BDByteCastBrowser;
@protocol IESLiveMultiDeviceQRDelegate;

@interface IESLiveMultiDeviceQR : NSObject

@property (retain, nonatomic) BDByteCastBrowser *castBrowser;
@property (copy, nonatomic) id /* block */ messageBlock;
@property (weak, nonatomic) id<IESLiveMultiDeviceQRDelegate> delegate;
@property (nonatomic) BOOL isOpenStartMirror;
@property (copy, nonatomic) NSString *liveType;

+ (id)generateQRCode:(id)a0 size:(double)a1;
+ (id)createHDUIImageFormCIImage:(id)a0 withSize:(double)a1;

- (id)initWithCastContextId:(id)a0;
- (void).cxx_destruct;

@end
