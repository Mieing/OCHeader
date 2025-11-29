@class NSString;

@interface AWEECMallDeliverySmallWindow : NSObject

@property (copy, nonatomic) NSString *roomID;
@property (copy, nonatomic) NSString *roomPath;
@property (nonatomic) BOOL needMute;
@property (nonatomic) BOOL showNextAppearCycle;

+ (id)shareInstance;

- (void)initSmallWindow:(id)a0;
- (void)showSmallWindowWithHostVC:(id)a0;
- (void)closeSmallWindow;
- (void).cxx_destruct;

@end
