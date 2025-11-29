@class NSString;

@interface ReceiveCoinTaskAwardResponse_PopUpInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *buttonText;

+ (id)descriptor;

@end
