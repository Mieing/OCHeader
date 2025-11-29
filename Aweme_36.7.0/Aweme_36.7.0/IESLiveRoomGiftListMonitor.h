@protocol IESLiveMonitor;

@interface IESLiveRoomGiftListMonitor : NSObject

@property (weak, nonatomic) id<IESLiveMonitor> monitor;
@property (nonatomic) BOOL enableMonitor;

+ (id)buildCategoryWithName:(id)a0 fileName:(id)a1 giftId:(id)a2 isOpenGift:(BOOL)a3 isGiftNil:(BOOL)a4 isAsync:(BOOL)a5 errorCode:(id)a6 errorInfo:(id)a7;

- (void)trackWithName:(id)a0 fileName:(id)a1 giftId:(id)a2 isOpenGift:(BOOL)a3 isGiftNil:(BOOL)a4;
- (void)trackErrorWithGiftId:(id)a0 isOpenGift:(BOOL)a1 errorType:(long long)a2 multiLevelType:(long long)a3 extra:(id)a4;
- (void)trackWithName:(id)a0 fileName:(id)a1 giftId:(id)a2 isOpenGift:(BOOL)a3 isGiftNil:(BOOL)a4 isAsync:(BOOL)a5 errorCode:(id)a6 errorInfo:(id)a7;
- (void).cxx_destruct;
- (id)init;

@end
