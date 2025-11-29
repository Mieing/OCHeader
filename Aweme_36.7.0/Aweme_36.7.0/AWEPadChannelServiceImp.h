@class NSArray, NSString;

@interface AWEPadChannelServiceImp : NSObject <AWEPadChannelService>

@property (retain, nonatomic) NSArray *iPadChannelReferArray;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (id)createSkyLightContainerViewControllerWithConfig:(id)a0;
- (id)createStreamViewController;
- (BOOL)enableLightModeWithChannelModel:(id)a0;
- (id)createPolymericChannelViewControllerWithChannelModel:(id)a0;
- (BOOL)enableLightModeWithPageKey:(id)a0;
- (id)createPadLongVidioFeedDataControllerWithPath:(id)a0;
- (void).cxx_destruct;

@end
