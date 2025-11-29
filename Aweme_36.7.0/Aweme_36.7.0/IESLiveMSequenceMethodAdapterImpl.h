@class NSString;

@interface IESLiveMSequenceMethodAdapterImpl : IESLiveBaseAdapter <IESLiveMSequenceMethodAdapter>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)getMSeqRoomLayoutWithRoom:(id)a0 trackContext:(id)a1;

@end
