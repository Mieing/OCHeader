@class NSString, NSArray;

@interface AWEPOIDetailPhotosPreviewViewControllerConfiguration : AWEPOIDetailPhotosPreviewBaseConfiguration

@property (nonatomic) BOOL showReportEntrance;
@property (copy, nonatomic) NSString *reportSchema;
@property (nonatomic) BOOL showUploadEntrance;
@property (copy, nonatomic) id /* block */ gotoUploadBlock;
@property (copy, nonatomic) NSArray *photos;
@property (nonatomic) BOOL showCloseButton;
@property (nonatomic) long long actualTotalCount;

- (void).cxx_destruct;

@end
