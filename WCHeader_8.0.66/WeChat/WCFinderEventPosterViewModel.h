@class FinderEventInfo;
@protocol WCFinderEventPosterViewModelDelegate;

@interface WCFinderEventPosterViewModel : NSObject

@property (nonatomic) unsigned long long eventTopicId;
@property (retain, nonatomic) FinderEventInfo *eventInfo;
@property (weak, nonatomic) id<WCFinderEventPosterViewModelDelegate> delegate;

- (id)initWithEventTopicId:(unsigned long long)a0;
- (id)initWithEventInfo:(id)a0;
- (void)requestEventInfo;
- (void).cxx_destruct;

@end
