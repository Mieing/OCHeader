@class NSString, AWEECOMIMTopNotifyDataSource;

@interface AWEECOMIMChatListTopNotifyCellModel : NSObject <AWEECOMIMChatListCellModelProtocol>

@property (retain, nonatomic) AWEECOMIMTopNotifyDataSource *dataSource;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)cellModelType;
- (void).cxx_destruct;
- (id)initWithDataSource:(id)a0;

@end
