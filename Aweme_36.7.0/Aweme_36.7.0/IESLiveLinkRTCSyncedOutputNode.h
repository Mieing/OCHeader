@class NSString;
@protocol IESLiveLinkRTCSyncedOutputNodeDelegate, IESLiveLinkRTCSyncedOutputNodeDataSource;

@interface IESLiveLinkRTCSyncedOutputNode : IESLiveLinkOutputNode <IESLiveLinkRTCSyncedDataReceiver> {
    struct _opaque_pthread_mutex_t { long long __sig; char __opaque[56]; } _mutexLock;
}

@property (weak, nonatomic) id<IESLiveLinkRTCSyncedOutputNodeDelegate> delegate;
@property (weak, nonatomic) id<IESLiveLinkRTCSyncedOutputNodeDataSource> dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
