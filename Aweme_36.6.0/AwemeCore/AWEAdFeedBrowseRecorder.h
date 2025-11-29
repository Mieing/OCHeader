@class NSString, NSMutableSet;

@interface AWEAdFeedBrowseRecorder : HTSService <AWEAdFeedBrowseRecorder>

@property (retain, nonatomic) NSMutableSet *pendingCreativeIDs;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (void)onAppDidEnterBackground;
- (id)discardCreativeIDListString;
- (void).cxx_destruct;
- (void)dealloc;

@end
