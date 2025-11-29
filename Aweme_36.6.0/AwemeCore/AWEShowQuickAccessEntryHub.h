@class NSString, NSMutableDictionary;
@protocol AWEShowQuickAccessEntryHubDelegate, AWEShowQuickAccessEntryProtocol;

@interface AWEShowQuickAccessEntryHub : NSObject <AWEShowQuickAccessEntryHubProtocol>

@property (retain, nonatomic) NSMutableDictionary *entries;
@property (retain, nonatomic) id<AWEShowQuickAccessEntryProtocol> currentEntry;
@property (weak, nonatomic) id<AWEShowQuickAccessEntryHubDelegate> delegate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupDelegate:(id)a0;
- (void)determineActiveEntryWithContext:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)registerEntry:(id)a0;

@end
