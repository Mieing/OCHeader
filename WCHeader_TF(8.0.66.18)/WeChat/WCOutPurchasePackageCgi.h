@protocol WCOutPurchasePackageDelegate;

@interface WCOutPurchasePackageCgi : NSObject <PBMessageObserverDelegate>

@property (nonatomic) unsigned int eventID;
@property (weak, nonatomic) id<WCOutPurchasePackageDelegate> delegate;

+ (id)instanceWithDelegate:(id)a0;

- (void)doCgi:(id)a0;
- (void)MessageReturn:(id)a0 Event:(unsigned int)a1;
- (void).cxx_destruct;

@end
