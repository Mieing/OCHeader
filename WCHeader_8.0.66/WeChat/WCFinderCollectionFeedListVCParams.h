@class NSString;
@protocol WCFinderCollectionFeedListViewControllerDelegate;

@interface WCFinderCollectionFeedListVCParams : NSObject

@property (copy, nonatomic) NSString *destinationFeedID;
@property (nonatomic) BOOL autoShowCollectionList;
@property (nonatomic) BOOL showPaidCollectionSkipToast;
@property (weak, nonatomic) id<WCFinderCollectionFeedListViewControllerDelegate> vcDelegate;
@property (nonatomic) BOOL shouldUserAuthorScene;
@property (nonatomic) BOOL hasAutoDestinated;

+ (id)defaultParams;

- (void).cxx_destruct;

@end
