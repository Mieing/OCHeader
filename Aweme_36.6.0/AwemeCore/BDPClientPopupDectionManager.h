@interface BDPClientPopupDectionManager : NSObject

@property (nonatomic) BOOL hasFondSensitiveWord;
@property (nonatomic) double popupDetectDuration;

+ (id)sharedService;

- (void)checkPopupWithParam:(id)a0 instance:(id)a1;

@end
