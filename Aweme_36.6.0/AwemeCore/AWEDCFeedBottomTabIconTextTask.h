@class NSNumber, NSString;

@interface AWEDCFeedBottomTabIconTextTask : AWEDCFeedBottomTabDownloadBaseTask

@property (copy, nonatomic) NSNumber *iconPosition;
@property (copy, nonatomic) NSString *darkIconURL;
@property (copy, nonatomic) NSString *lightIconURL;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSNumber *hasBG;
@property (copy, nonatomic) NSNumber *iconSize;

- (id)tryGenerateEntryModelWithDownloadMap:(id)a0;
- (id)tryGenerateDownloadURLSet;
- (void).cxx_destruct;
- (BOOL)isValid;
- (id)initWithDataModel:(id)a0;

@end
