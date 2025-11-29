@class BatchGetOrdersResponse_ReceiveOrder, BatchGetOrdersResponse_SendOrder;

@interface BatchGetOrdersResponse_Order : WXPBGeneratedMessage

@property (nonatomic) unsigned int type;
@property (retain, nonatomic) BatchGetOrdersResponse_SendOrder *sendOrder;
@property (retain, nonatomic) BatchGetOrdersResponse_ReceiveOrder *receiveOrder;

+ (void)initialize;

@end
