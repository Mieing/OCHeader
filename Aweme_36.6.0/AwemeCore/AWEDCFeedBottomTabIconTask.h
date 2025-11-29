@class NSString;

@interface AWEDCFeedBottomTabIconTask : AWEDCFeedBottomTabDownloadBaseTask

@property (copy, nonatomic) NSString *darkImage;
@property (copy, nonatomic) NSString *lightImage;

- (id)tryGenerateEntryModelWithDownloadMap:(id)a0;
- (id)tryGenerateDownloadURLSet;
- (void).cxx_destruct;
- (BOOL)isValid;
- (id)initWithDataModel:(id)a0;

@end
