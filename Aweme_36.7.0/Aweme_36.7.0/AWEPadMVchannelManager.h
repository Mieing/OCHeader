@class NSString;

@interface AWEPadMVchannelManager : HTSService <AWEPadMVChannelProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)ChannelType;
- (id)referStringForPad;
- (void)updateChannelType:(id)a0;
- (void)parseChannelInfo:(id)a0;
- (BOOL)enable;

@end
