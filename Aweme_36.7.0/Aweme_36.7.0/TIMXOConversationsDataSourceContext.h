@class NSArray, TIMXOConversationsUnreadCountCalculatorInitConfig, TIMXSDKInstance;
@protocol TIMXOConversationsDataSourceDelegate;

@interface TIMXOConversationsDataSourceContext : NSObject

@property (retain, nonatomic) TIMXSDKInstance *rootObject;
@property (copy, nonatomic) id /* block */ filterBlock;
@property (nonatomic) BOOL includeEmpty;
@property (nonatomic) long long firstPageLimit;
@property (copy, nonatomic) NSArray *arrInboxType;
@property (retain, nonatomic) id<TIMXOConversationsDataSourceDelegate> delegate;
@property (nonatomic) long long boxType;
@property (retain, nonatomic) TIMXOConversationsUnreadCountCalculatorInitConfig *unreadConfig;
@property (nonatomic) long long loadMoreLimit;

- (void).cxx_destruct;

@end
