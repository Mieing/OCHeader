@class NSString, MMFinderLiveTaskId;

@interface MMLiveKtvThemeItemFetchingByLiveTaskIdProvider : NSObject <MMLiveKtvThemeItemFetching>

@property (retain, nonatomic) MMFinderLiveTaskId *taskId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithTaskId:(id)a0;
- (void)fetchThemeItemsWithCompletionBlock:(id /* block */)a0;
- (void).cxx_destruct;

@end
