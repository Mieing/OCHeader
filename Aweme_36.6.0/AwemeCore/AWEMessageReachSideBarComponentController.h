@class NSString;
@protocol AWEMessageReachFrameConfigProtocol;

@interface AWEMessageReachSideBarComponentController : NSObject <AWEMessageReachChannelControllerProtocol>

@property (readonly, nonatomic) id<AWEMessageReachFrameConfigProtocol> config;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)canRequestMessageReachDataWithParamsModel:(id)a0;
- (id)canShowMessageReachDataWithParamsModel:(id)a0 componentModel:(id)a1;
- (void).cxx_destruct;
- (id)channelID;
- (id)initWithConfig:(id)a0;

@end
