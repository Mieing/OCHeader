@class NSString, WCFinderFeedPickerViewController;

@interface WCFinderFeedPickerHelper : NSObject <WCFinderFeedPickerViewControllerDelegate>

@property (copy, nonatomic) id /* block */ onCancel;
@property (copy, nonatomic) id /* block */ onFinish;
@property (weak, nonatomic) WCFinderFeedPickerViewController *picker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)pickPostedFeedFromVC:(id)a0 config:(id /* block */)a1 onCancel:(id /* block */)a2 onFinish:(id /* block */)a3;

- (void)finderFeedPickerViewController:(id)a0 didSelectDataItem:(id)a1;
- (void)finderFeedPickerViewControllerDidClickCancel:(id)a0;
- (void).cxx_destruct;

@end
