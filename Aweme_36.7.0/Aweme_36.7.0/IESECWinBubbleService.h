@class IESECWinContext, NSString;

@interface IESECWinBubbleService : NSObject <IESECWinContextProtocol, IESECWinBubbleService>

@property (weak, nonatomic) IESECWinContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (nonatomic) BOOL bookPageDismiss;

@end
