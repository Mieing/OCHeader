@class NSString, NSNumber;

@interface AWEDCFeedBottomTabDoubleCardTask : AWEDCFeedBottomTabDownloadBaseTask

@property (copy, nonatomic) NSString *frontDarkImageURL;
@property (copy, nonatomic) NSString *frontLightImageURL;
@property (copy, nonatomic) NSString *backDarkImageURL;
@property (copy, nonatomic) NSString *backLightImageURL;
@property (copy, nonatomic) NSNumber *needAnimate;

- (id)tryGenerateEntryModelWithDownloadMap:(id)a0;
- (id)tryGenerateDownloadURLSet;
- (void).cxx_destruct;
- (BOOL)isValid;
- (id)initWithDataModel:(id)a0;

@end
