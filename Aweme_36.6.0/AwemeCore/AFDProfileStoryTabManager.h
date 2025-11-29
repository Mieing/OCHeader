@class NSString;

@interface AFDProfileStoryTabManager : NSObject <AWEUserMessage, AFDProfileStoryTabManagerProtocol>

@property (nonatomic) BOOL hasForceShowStoryTab;
@property (nonatomic) BOOL forceShowStory25Tab;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL hasPrivateWorkMovedToStoryTab;

+ (id)sharedInstance;

- (void)userChangedFrom:(id)a0 to:(id)a1;
- (void)didFinishUpdateCurrentFullUserForReason:(unsigned long long)a0;
- (BOOL)shouldForceShowStory24WorkHomeTab;
- (BOOL)shouldForceShowStory25WorkHomeTab;
- (BOOL)shouldForceShowStoryWorkHomeTab;
- (id)init;
- (void)dealloc;

@end
