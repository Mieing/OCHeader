@class NSString;
@protocol StoreEmotionDeleteTaskDelegate;

@interface StoreEmotionDeleteTask : StoreEmotionNotifyTask

@property (retain, nonatomic) NSString *productID;
@property (weak, nonatomic) id<StoreEmotionDeleteTaskDelegate> delegate;

- (id)initWithProductID:(id)a0 andDelegate:(id)a1;
- (BOOL)resumeLogic;
- (void).cxx_destruct;

@end
