@class NSString, LSIMMessageCardCancelModel;

@interface LSIMMessageCardCancelCellVM : LSIMMessageCardBaseCellVM

@property (retain, nonatomic) LSIMMessageCardCancelModel *cancelModel;
@property (copy, nonatomic) NSString *cardID;
@property (nonatomic) BOOL hasSetFetchedData;

- (void)trackButtonClick:(id)a0;
- (BOOL)needRequestNewData;
- (id)fetchParams;
- (void)handleMessage;
- (void)containerDidTapped;
- (void)openWebURL:(id)a0;
- (BOOL)hasSendMethod;
- (unsigned long long)fetchCardType;
- (void)detailButtonDidTapped;
- (void)actionButtonDidTapped;
- (void)bindCardBody;
- (id)fetchItemID;
- (id)fetchURLPath;
- (void).cxx_destruct;

@end
