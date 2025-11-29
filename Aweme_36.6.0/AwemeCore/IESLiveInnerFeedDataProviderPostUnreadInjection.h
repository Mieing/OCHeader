@class IESLiveInnerFeedContext, NSArray, NSString;

@interface IESLiveInnerFeedDataProviderPostUnreadInjection : NSObject <IESLiveInnerFeedDataProviderInjectionProtocol>

@property (retain, nonatomic) IESLiveInnerFeedContext *context;
@property (retain, nonatomic) NSArray *items;
@property (retain, nonatomic) NSArray *hiddenBuckets;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (void)willFetchWithURL:(id)a0 withDataChangedType:(unsigned long long)a1 parameters:(id)a2 updateBlock:(id /* block */)a3;
- (void)didFetchWithResponse:(id)a0 error:(id)a1;
- (long long)injectionPriority;
- (void)updateHiddenBuckets:(id)a0;
- (BOOL)_enablePostUnreadRoom;
- (void)p_postUnreadItems:(long long)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;
- (void)dealloc;

@end
