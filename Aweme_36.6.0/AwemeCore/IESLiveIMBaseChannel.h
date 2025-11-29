@class IESLiveIMLongLinkTransport, IESLiveIMShortLinkTransport, NSString;
@protocol IESLiveIMFetcher, IESLiveIMTransport, IESLiveIMChannelDelegate, IESLiveIMDecoder, IESLiveIMConfig;

@interface IESLiveIMBaseChannel : NSObject <IESLiveIMChannel, IESLiveIMTransportDelegate>

@property (retain, nonatomic) id<IESLiveIMConfig> config;
@property (retain, nonatomic) IESLiveIMShortLinkTransport *shortLink;
@property (retain, nonatomic) IESLiveIMLongLinkTransport *longLink;
@property (retain, nonatomic) id<IESLiveIMFetcher> longLinkFetcher;
@property (retain, nonatomic) id<IESLiveIMDecoder> messageDecoder;
@property (retain, nonatomic) id<IESLiveIMTransport> currentTransport;
@property (weak, nonatomic) id<IESLiveIMChannelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupWithConfig:(id)a0;
- (double)shortLinkFallbackDelay;
- (double)shortLinkFallbackDelayMax;
- (void)reopenWith:(long long)a0;
- (void)reopenIfNeed:(id)a0;
- (void)transport:(id)a0 received:(id)a1;
- (void)transport:(id)a0 success:(id)a1;
- (void)transport:(id)a0 failure:(id)a1;
- (void)openLongLink;
- (void)switchTransportTo:(long long)a0;
- (void)close;
- (void).cxx_destruct;
- (void)open;
- (id)initWithConfig:(id)a0;

@end
