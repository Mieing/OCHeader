@class NSString, NSArray;

@interface LSIMMessageCooperationCellVM : LSIMMessageCardBaseCellVM

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *detailURL;
@property (copy, nonatomic) NSString *merchantName;
@property (copy, nonatomic) NSString *merchantIcon;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *contactRecordID;
@property (copy, nonatomic) NSArray *actions;
@property (nonatomic) BOOL needHideActions;

- (BOOL)needRequestNewData;
- (void)handleMessage;
- (void)originExtDictDidUpdated;
- (void)containerDidTapped;
- (BOOL)hasSendMethod;
- (void)handleActionBtnClickedWithActionType:(id)a0;
- (void)bindUpdatedDataFromUpdateDict:(id)a0;
- (void).cxx_destruct;

@end
