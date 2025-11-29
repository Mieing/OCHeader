@class NSString, NSArray;
@protocol AWEHPChannelControllerProtocol;

@interface AWERefreshRetrievePluginController : NSObject <AWEHPChannelPluginControllerProtocol, AWEHPChannelPluginControllerMultiInstanceProtocol>

@property (retain, nonatomic) id<AWEHPChannelControllerProtocol> controller;
@property (copy, nonatomic) NSString *lastRefreshUserID;
@property (copy, nonatomic) NSArray *canRetrieveRefreshTypeList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (BOOL)allowInjectToChannel:(id)a0;

- (BOOL)channelRefreshWithModel:(id)a0 completion:(id /* block */)a1;
- (BOOL)canRefreshRetrieve:(id)a0;
- (void)showRefreshMaskOnVC:(id)a0;
- (void).cxx_destruct;
- (id)initWithChannel:(id)a0;

@end
