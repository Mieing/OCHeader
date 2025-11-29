@class NSString, NSArray;

@interface AWEECOMIMModifyAddressAndScheduleDeliveryCardModel : AWEECOMIMBaseCardModel <AWEECOMIMCardComponentCommonTitleViewProtocol, AWEECOMIMSubCardOrderCardProtocol, AWEECOMIMCardComponentMultiLabelViewProtocol, AWEECOMIMCardComponentOperationPanelProtocol>

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *goodTitle;
@property (copy, nonatomic) NSString *goodImg;
@property (copy, nonatomic) NSString *goodNum;
@property (copy, nonatomic) NSString *showPrice;
@property (copy, nonatomic) NSString *orderId;
@property (copy, nonatomic) NSArray *multiLabelModelArr;
@property (copy, nonatomic) NSArray *buttons;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)careNoticeMsgType;
+ (Class)cardViewClass;

- (void)updateModelWithData:(id)a0 encrypted:(BOOL)a1;
- (void).cxx_destruct;

@end
