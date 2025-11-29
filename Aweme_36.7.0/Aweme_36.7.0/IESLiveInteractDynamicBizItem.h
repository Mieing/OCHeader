@class NSString, NSMutableDictionary, IESLiveInteractDynamicContainerViewHolder;

@interface IESLiveInteractDynamicBizItem : NSObject <IESLiveInteractDynamicBusinessItem>

@property (readonly, copy, nonatomic) NSString *bizId;
@property (retain, nonatomic) IESLiveInteractDynamicContainerViewHolder *viewHolder;
@property (retain, nonatomic) NSMutableDictionary *cache;
@property (retain, nonatomic) NSMutableDictionary *injectedViews;
@property (retain, nonatomic) NSMutableDictionary *injectedEvents;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)removeContainer;
- (void)loadContainer;
- (id)readCacheDataForKey:(id)a0;
- (id)initWithBizId:(id)a0;
- (void).cxx_destruct;
- (id)state;
- (void)dealloc;

@end
