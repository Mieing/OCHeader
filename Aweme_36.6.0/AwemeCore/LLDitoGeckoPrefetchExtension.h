@class NSString, LLDitoPageContext;
@protocol LLDitoExtensionContainerProtocol;

@interface LLDitoGeckoPrefetchExtension : NSObject <LLDitoExtensionProtocol>

@property (weak, nonatomic) LLDitoPageContext *context;
@property (weak, nonatomic) id<LLDitoExtensionContainerProtocol> container;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)initializeExtension;
- (id)channelArrFromLibraAndSettings;
- (id)channelArrFromLibraAndSettingsWithPOIGurdReleaseAccessKey;
- (void)downloadChannelArr:(id)a0 withAccessKey:(id)a1;
- (void)logGeckoPrefetchResult:(id)a0;
- (void).cxx_destruct;

@end
