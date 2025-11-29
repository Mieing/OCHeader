@class CSJMaterialMeta, NSString, CSJAdSlot;

@interface CSJNativeExpressVideoAdContext : NSObject

@property (retain, nonatomic) CSJAdSlot *slot;
@property (retain, nonatomic) CSJMaterialMeta *materialMeta;
@property (weak, nonatomic) id sender;
@property (copy, nonatomic) id /* block */ skipBlock;
@property (copy, nonatomic) NSString *rewardAlertTitle;
@property (copy, nonatomic) NSString *rewardAlertConfirm;
@property (copy, nonatomic) NSString *rewardAlertCancel;
@property (nonatomic) BOOL useBackupAlert;

- (void).cxx_destruct;

@end
