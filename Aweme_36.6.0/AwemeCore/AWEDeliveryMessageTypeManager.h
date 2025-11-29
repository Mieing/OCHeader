@class NSLock, NSMutableDictionary;
@protocol AWEDeliveryCellRegisterProtocol;

@interface AWEDeliveryMessageTypeManager : NSObject

@property (retain, nonatomic) id<AWEDeliveryCellRegisterProtocol> deliveryServiceCellRegister;
@property (retain) NSMutableDictionary *cellRegisterMap;
@property (retain, nonatomic) NSLock *cellRegisterLock;

+ (id)shareInstance;

- (id)cellRegisterWithPigeonBizType:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
