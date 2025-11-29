@class NSArray;

@interface MMLiveGiftResourcesAvailabilityResult : NSObject

@property (retain, nonatomic) NSArray *missingGifts;
@property (retain, nonatomic) NSArray *missingResources;
@property (retain, nonatomic) NSArray *availableResources;
@property (retain, nonatomic) NSArray *resourceDownloadWorkItems;

- (void).cxx_destruct;

@end
