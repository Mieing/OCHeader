@class NSString;

@interface HTSLiveLinkmicOrderSingFinishContent : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *closeOrderSingToast;
@property (nonatomic) BOOL autoEnlarge;

+ (id)descriptor;

@end
