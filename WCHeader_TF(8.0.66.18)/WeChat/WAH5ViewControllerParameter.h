@class NSURL, NSNumber;

@interface WAH5ViewControllerParameter : NSObject

@property (retain, nonatomic) NSURL *url;
@property (nonatomic) BOOL disableShareMenu;
@property (nonatomic) BOOL presentModal;
@property (retain, nonatomic) NSNumber *isForceFullScreen;
@property (nonatomic) BOOL isForceRotateToPortrait;
@property (nonatomic) BOOL useOfflinePkgIfExist;

- (void).cxx_destruct;

@end
