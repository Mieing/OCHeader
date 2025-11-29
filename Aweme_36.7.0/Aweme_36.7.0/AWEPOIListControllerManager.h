@class NSMutableArray;

@interface AWEPOIListControllerManager : NSObject

@property (retain, nonatomic) NSMutableArray *controllersArray;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void)listAnchorControllerDidSetupPopupViewController:(id)a0;
- (void)listAnchorControllerDidClosePopupViewController:(id)a0;
- (BOOL)isShowingListAnchorPopupViewController;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
