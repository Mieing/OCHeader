@class IESLiveTouchInspectView, NSString, NSDictionary, NSArray;

@interface IESLiveAfterComboHelper : NSObject <IESLiveGiftAfterComboRouter>

@property (retain, nonatomic) IESLiveTouchInspectView *inspectView;
@property (copy, nonatomic) NSString *giftAfterSendSchema;
@property (copy, nonatomic) NSDictionary *giftAfterSendConfig;
@property (copy, nonatomic) id /* block */ giftAfterSendTask;
@property (nonatomic) long long fePageConfigType;
@property (nonatomic) long long directBackDuration;
@property (nonatomic) long long comboBufferDuration;
@property (nonatomic) long long enableOpenGiftPanel;
@property (nonatomic) long long bufferDuration;
@property (nonatomic) long long maxDuration;
@property (copy, nonatomic) NSArray *unsupportedGiftList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)didSetAttachingDIContext;
- (id)initWithDIContext:(id)a0;
- (void)recordGiftAfterSendTaskWithSchema:(id)a0;
- (void)startGiftAfterSendTaskType:(long long)a0;
- (BOOL)enableAfterComboStartTaskWithType:(long long)a0 giftId:(id)a1 comboTimestamp:(double)a2;
- (void)cancelGiftAfterSendTask;
- (void)removeTouchEventInspectView;
- (void)createTouchEventInspectView;
- (void)interruptGiftAfterSendTask;
- (void).cxx_destruct;

@end
