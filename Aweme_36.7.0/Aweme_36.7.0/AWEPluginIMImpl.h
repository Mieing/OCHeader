@class AWEIMConfirmView, NSString;

@interface AWEPluginIMImpl : NSObject <BDPIMPluginDelegate>

@property (retain, nonatomic) AWEIMConfirmView *view;
@property (retain, nonatomic) NSString *functionFrom;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedPlugin;

- (void)bdp_shareMessageToFriend:(id)a0 uniqueID:(id)a1 callback:(id /* block */)a2;
- (id)generateSchema:(id)a0 query:(id)a1;
- (void)handleResult:(BOOL)a0 uniqueID:(id)a1 isFriend:(BOOL)a2;
- (void).cxx_destruct;
- (void)dealloc;

@end
