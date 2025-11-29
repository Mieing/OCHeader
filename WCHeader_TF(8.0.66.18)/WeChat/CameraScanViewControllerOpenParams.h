@class NSString, CameraScanGoodsAdInfo, CameraScanGoodsJSAPIInfo;

@interface CameraScanViewControllerOpenParams : NSObject

@property (nonatomic) BOOL bHideMyQRCodeBtn;
@property (nonatomic) BOOL bHideAlbumBtn;
@property (nonatomic) BOOL bHideTorchButton;
@property (copy, nonatomic) NSString *descStr;
@property (retain, nonatomic) CameraScanGoodsAdInfo *adInfo;
@property (retain, nonatomic) CameraScanGoodsJSAPIInfo *jsapiInfo;

- (void).cxx_destruct;

@end
