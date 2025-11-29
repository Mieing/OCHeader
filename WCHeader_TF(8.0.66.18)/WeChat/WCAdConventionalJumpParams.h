@class WCDataItem, NSArray, WCAdQrCodeScanInfo, UIView, WCAdCardBtnInfo;

@interface WCAdConventionalJumpParams : NSObject

@property (retain, nonatomic) WCAdQrCodeScanInfo *adQrCodeScanInfo;
@property (retain, nonatomic) WCAdCardBtnInfo *actionInfo;
@property (retain, nonatomic) WCDataItem *dataItem;
@property (nonatomic) unsigned long long scene;
@property (retain, nonatomic) UIView *originView;
@property (nonatomic) unsigned long long clickIndex;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } originRectInScreen;
@property (retain, nonatomic) NSArray *originGridRectsInScreen;

- (void).cxx_destruct;

@end
