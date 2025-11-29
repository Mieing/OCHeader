@class UIImage, NSIndexPath, NSString;
@protocol ACCSideslipPropBaseCellUIConfigProtocol, ACCSideslipPropPickCellCoordinatorProtocol;

@interface ACCSideslipCancelPropCellModel : NSObject <ACCSideslipPropBaseCellModelProtocol>

@property (retain, nonatomic) id<ACCSideslipPropBaseCellUIConfigProtocol> uiConfig;
@property (readonly, nonatomic) UIImage *icon;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (weak, nonatomic) id<ACCSideslipPropPickCellCoordinatorProtocol> coordinator;
@property (readonly, copy, nonatomic) NSString *accessibilityText;
@property (nonatomic) BOOL isUnavailable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
