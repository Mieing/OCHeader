@class NSString;

@interface IESLiveWalletHelpDesk : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *helpLink;

+ (id)descriptor;

@end
