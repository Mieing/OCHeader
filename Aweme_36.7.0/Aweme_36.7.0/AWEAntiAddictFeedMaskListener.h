@class NSString;

@interface AWEAntiAddictFeedMaskListener : NSObject <AWEAntiAddictNoticeMessage, AWEAntiAddictActionListener>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) id /* block */ triggerBeginBlock;
@property (copy, nonatomic) id /* block */ triggerEndBlock;
@property (copy, nonatomic) id /* block */ triggerRevokeBlock;

- (long long)listenerType;
- (void)systemBlockMaskConfigDidChange;
- (void)feedDidDisplayMask:(id)a0;
- (void)feedDidEndDisplayMask:(id)a0;
- (void)feedRevokeMask;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;
- (void)setup;

@end
