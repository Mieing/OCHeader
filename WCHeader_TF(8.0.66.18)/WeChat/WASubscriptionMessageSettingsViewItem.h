@class NSString, SubscribeMsgItem, NSArray;

@interface WASubscriptionMessageSettingsViewItem : MMObject

@property (copy, nonatomic) NSString *wording;
@property (copy, nonatomic) NSString *templateID;
@property (nonatomic) int templateType;
@property (retain, nonatomic) SubscribeMsgItem *originMsgItem;
@property (retain, nonatomic) NSArray *detailItems;
@property (nonatomic) BOOL selected;

- (id)initWith:(id)a0;
- (void)fillWithMsgItem:(id)a0;
- (id)generateDetailItems:(id)a0;
- (BOOL)itemDataChanged;
- (id)toMsgItem;
- (void).cxx_destruct;

@end
