@class NSString, IESECWinLivingOrderModel, IESECTracker;

@interface IESECWinOrderObject : NSObject <IGListDiffable, IESECWinFeedFlowLayoutProtocol>

@property (retain, nonatomic) IESECWinLivingOrderModel *orderModel;
@property (retain, nonatomic) IESECTracker *tracker;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
