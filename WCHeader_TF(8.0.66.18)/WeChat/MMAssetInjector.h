@class MMAssetInfo, NSString;

@interface MMAssetInjector : NSObject

@property (retain, nonatomic) MMAssetInfo *boundAsset;
@property (retain, nonatomic) NSString *errorInfo;
@property (nonatomic) BOOL isEditable;
@property (nonatomic) BOOL shouldForceSelect;
@property (nonatomic) BOOL shouldLoadUnedited;
@property (nonatomic) BOOL shouldLoadEditOverlay;
@property (nonatomic) BOOL shouldHideEditPageTopRightEntrance;
@property (nonatomic) BOOL shouldKeepTimeRange;

- (void).cxx_destruct;

@end
