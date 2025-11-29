@class IESLiveIMExtraTransport, NSString;
@protocol IESLiveIMChannelDelegate, IESLiveIMTransport;

@interface IESLiveIMMessageChannel : IESLiveIMBaseChannel <IESLiveIMMessageChannel>

@property (retain, nonatomic) IESLiveIMExtraTransport *extraLink;
@property (retain, nonatomic) id<IESLiveIMTransport> currentTransport;
@property (weak, nonatomic) id<IESLiveIMChannelDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupWithConfig:(id)a0;
- (void)openLongLink;
- (void)switchTransportWithRule:(long long)a0;
- (void)close;
- (void).cxx_destruct;
- (void)open;

@end
