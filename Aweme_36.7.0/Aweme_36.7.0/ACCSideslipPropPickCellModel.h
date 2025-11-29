@class NSString, NSIndexPath;
@protocol ACCSideslipPropBaseCellUIConfigProtocol, ACCSideslipPropDataModelProtocol, ACCSideslipPropPickCellCoordinatorProtocol;

@interface ACCSideslipPropPickCellModel : NSObject <ACCSideslipPropBaseCellModelProtocol>

@property (retain, nonatomic) id<ACCSideslipPropBaseCellUIConfigProtocol> uiConfig;
@property (retain, nonatomic) id<ACCSideslipPropDataModelProtocol> dataModel;
@property (nonatomic) BOOL isPlaceHolder;
@property (nonatomic) BOOL hasDownloadedIcon;
@property (nonatomic) BOOL isDownloadError;
@property (nonatomic) BOOL isUnavailable;
@property (nonatomic) double iconStartLoadTime;
@property (nonatomic) double iconFinishLoadTime;
@property (copy, nonatomic) id /* block */ iconDownloadedCompletion;
@property (copy, nonatomic) id /* block */ iconRenderCompletion;
@property (retain, nonatomic) NSIndexPath *indexPath;
@property (weak, nonatomic) id<ACCSideslipPropPickCellCoordinatorProtocol> coordinator;
@property (readonly, copy, nonatomic) NSString *accessibilityText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
