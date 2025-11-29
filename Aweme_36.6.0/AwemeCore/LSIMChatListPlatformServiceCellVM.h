@class NSString;

@interface LSIMChatListPlatformServiceCellVM : LSListCellVM <LSIMListViewModelProtocol>

@property (nonatomic) BOOL isRequesting;
@property (readonly, copy, nonatomic) NSString *conversationID;
@property (readonly, copy, nonatomic) NSString *shortID;
@property (nonatomic) unsigned long long modelType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleCellWillDisplay:(id)a0;
- (id)unreadCountNew;
- (void)dataUpdateTimestampShow;
- (double)messageTime;
- (void)updateRecalledContentIfNeed;
- (void)conversationDidUpdate;
- (void)deleteByUserOperation;
- (void)clearUnreadMessage;
- (BOOL)canEditInTableRow;
- (void)updateCustomerServiceInfo:(id)a0;
- (void)handleCellDidSelect:(id)a0;
- (void)requestCustomerServicePageUrlWithCompletion:(id /* block */)a0;
- (id)model;
- (void).cxx_destruct;
- (unsigned long long)unreadCount;

@end
