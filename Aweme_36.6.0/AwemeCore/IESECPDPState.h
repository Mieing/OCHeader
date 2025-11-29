@interface IESECPDPState : NSObject

@property (nonatomic) long long currentMode;
@property (nonatomic) double currentPercent;
@property (nonatomic) BOOL renderedFirst;
@property (nonatomic) BOOL packFinished;
@property (nonatomic) BOOL packDetailFinished;

- (void)receicveAction:(id)a0;

@end
