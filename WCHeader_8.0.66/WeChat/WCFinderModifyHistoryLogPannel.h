@class NSArray, FeedRecord;

@interface WCFinderModifyHistoryLogPannel : MMUIView

@property (retain, nonatomic) FeedRecord *initialInfo;
@property (retain, nonatomic) NSArray *imageList;

+ (id)buildWithFeedInitialInfo:(id)a0 imageList:(id)a1;

- (void)displayOnView:(id)a0;
- (void).cxx_destruct;

@end
