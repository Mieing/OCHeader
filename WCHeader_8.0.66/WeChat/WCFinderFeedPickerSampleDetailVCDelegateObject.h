@class NSString, UIViewController;

@interface WCFinderFeedPickerSampleDetailVCDelegateObject : NSObject <WCFinderFeedPickerPreviewViewControllerDelegate>

@property (weak, nonatomic) UIViewController *hostVC;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)delegateObjWithHostVC:(id)a0;
+ (void)downloadCoverOrThumbImageWithMediaWrap:(id)a0 completion:(id /* block */)a1;

- (void)_releaseSelf;
- (void)finderFeedPickerPreviewViewController:(id)a0 didClickDoneWithDataItem:(id)a1;
- (void).cxx_destruct;

@end
