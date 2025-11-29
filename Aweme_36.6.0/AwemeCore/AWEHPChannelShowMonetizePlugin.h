@class NSString, AWEPlayletPageContext;

@interface AWEHPChannelShowMonetizePlugin : NSObject <AWEHPChannelPluginControllerProtocol>

@property (retain, nonatomic) AWEPlayletPageContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)channelEnterWithModel:(id)a0;
- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
