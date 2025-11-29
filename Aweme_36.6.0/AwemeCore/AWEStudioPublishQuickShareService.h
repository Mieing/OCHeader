@class NSString, NSMutableDictionary;

@interface AWEStudioPublishQuickShareService : HTSService <AWEQuickShareEnterEditPageMessage, AWEStudioPublishQuickShareService>

@property (retain, nonatomic) NSMutableDictionary *quickShareCreationIds;
@property (nonatomic) long long feedType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)onServiceInit;
- (BOOL)isInMainFeedTab;
- (long long)getFeedType;
- (void)resetFeedType;
- (BOOL)isValidFeedType;
- (BOOL)isExistEditingQuickShare;
- (void)creationID:(id)a0 didEnterEditPage:(BOOL)a1;
- (void)clearEditingQuickShare;
- (void).cxx_destruct;

@end
