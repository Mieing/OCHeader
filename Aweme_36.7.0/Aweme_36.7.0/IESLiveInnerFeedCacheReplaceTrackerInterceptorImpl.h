@class NSString, NSHashTable;
@protocol IESLiveInnerFeedCacheReplaceTrackerInterceptorImplDelegate;

@interface IESLiveInnerFeedCacheReplaceTrackerInterceptorImpl : NSObject <IESLiveTrackerDelegate>

@property (retain, nonatomic) NSHashTable *trackerEventNames;
@property (weak, nonatomic) id<IESLiveInnerFeedCacheReplaceTrackerInterceptorImplDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
