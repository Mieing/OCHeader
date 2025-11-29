@class NSString;

@interface IESLiveAggregateInnerFeedInjection : NSObject <IESLiveInnerFeedDataControlAction, IESLiveInnnerFeedDataSourceInjectionProtocol>

@property (retain, nonatomic) NSString *enterFrom;
@property (retain, nonatomic) NSString *enterMethod;
@property (nonatomic) long long type;
@property (nonatomic) BOOL isNeedReplaceURL;
@property (nonatomic) BOOL hasReplaced;
@property (nonatomic) BOOL isInnerFromDrawer;
@property (retain, nonatomic) NSString *aggregateBannerId;
@property (copy, nonatomic) NSString *aggregateReplaceSourceKey;
@property (copy, nonatomic) NSString *aggregateReplaceTabId;
@property (nonatomic) BOOL useLynxDrawer;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)innerFeedDataDidChangeWithType:(unsigned long long)a0 datas:(id)a1 hasMore:(BOOL)a2 success:(BOOL)a3;
- (void)afterCompletionWithItems:(id)a0;
- (void)willFetchWithURL:(id)a0 withDataChangedType:(unsigned long long)a1 parameters:(id)a2 updateBlock:(id /* block */)a3;
- (void)didFetchWithResponse:(id)a0 error:(id)a1;
- (long long)injectionPriority;
- (id)initWithRoomAisle:(id)a0 type:(long long)a1;
- (void).cxx_destruct;

@end
