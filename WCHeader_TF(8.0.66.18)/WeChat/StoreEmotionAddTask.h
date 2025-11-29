@class NSString;
@protocol StoreEmotionAddTaskDelegate;

@interface StoreEmotionAddTask : StoreEmotionNotifyTask

@property (retain, nonatomic) NSString *productID;
@property (weak, nonatomic) id<StoreEmotionAddTaskDelegate> delegate;

- (id)initWithProductID:(id)a0 andDelegate:(id)a1;
- (BOOL)resumeLogic;
- (void).cxx_destruct;

@end
