@class NSString;

@interface IESGCPDetailTitleTestGameDownloadButtonViewModel : IESGCPDetailBaseViewModel

@property (copy, nonatomic) NSString *buttonText;
@property (copy, nonatomic) NSString *openSchema;
@property (nonatomic) BOOL isSupportIOS;
@property (copy, nonatomic) NSString *downloadInfo;
@property (copy, nonatomic) NSString *planID;

- (void)buttonDidClickHandler:(double)a0;
- (void)openTestGameDownlaodPage:(double)a0;
- (void).cxx_destruct;
- (void)setContent:(id)a0;

@end
