@class NSURL, NSString;
@protocol BDCTVideoRecordPreviewViewControllerDelegate;

@interface BDCTVideoRecordPreviewViewController : UIViewController

@property (retain, nonatomic) NSURL *videoURL;
@property (retain, nonatomic) NSString *readText;
@property (nonatomic) BOOL onlyRecord;
@property (weak, nonatomic) id<BDCTVideoRecordPreviewViewControllerDelegate> delegate;
@property (copy, nonatomic) id customUserInfo;

- (void)layoutContentViews;
- (void)trackUploadPreviewClickWithButtonType:(id)a0;
- (void).cxx_destruct;
- (void)viewDidLoad;

@end
