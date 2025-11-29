@class NSString, NSMutableDictionary;

@interface AWEFeedTemplateAnchorStatsParamsManager : NSObject <AWEFeedTemplateAnchorStatsParamsManagerProtocol>

@property (retain, nonatomic) NSMutableDictionary *recordDict;
@property (nonatomic) struct os_unfair_lock_s { unsigned int _os_unfair_lock_opaque; } lock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedManager;

- (BOOL)enableFeedAwemeAnchorStats;
- (id)getAndClearAnchorParamsWithAwemeId:(id)a0;
- (void)commitAnchorClickParamsWithAwemeId:(id)a0;
- (void)commitAnchorShowParamsWithAwemeId:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
