@class IESLiveInteractionLinkSessionBussinessContext, IESLiveInteractionStreamDataContext, NSString, IESLiveInteractionLinkSessionParamsStoreageImpl, IESLiveInteractionLinkSessionTrackContextImpl, IESLiveInteractionLinkSessionContextStoreageImpl;

@interface IESLiveInteractionLinkSessionImpl : NSObject <IESLiveInteractionLinkSessionTrackContextDataSource, IESLiveInteractionLinkSession>

@property (nonatomic) long long sessionID;
@property (nonatomic) unsigned long long startSource;
@property (nonatomic) unsigned long long endSource;
@property (retain, nonatomic) IESLiveInteractionLinkSessionParamsStoreageImpl *paramsStoreage;
@property (retain, nonatomic) IESLiveInteractionLinkSessionContextStoreageImpl *contextStoreage;
@property (retain, nonatomic) IESLiveInteractionLinkSessionTrackContextImpl *trackContxt;
@property (retain, nonatomic) IESLiveInteractionLinkSessionBussinessContext *businessContext;
@property (retain, nonatomic) IESLiveInteractionStreamDataContext *streamDataContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)startWithSource:(unsigned long long)a0;
- (void)endWithSource:(unsigned long long)a0;
- (id)streamDataBusinessContext;
- (void).cxx_destruct;
- (id)init;
- (void)setup;
- (void)clean;

@end
