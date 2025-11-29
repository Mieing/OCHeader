@interface IESECFrameDropMonitorWrapper : NSObject

@property (weak, nonatomic) id targetObj;
@property (copy, nonatomic) id /* block */ callback;

- (void).cxx_destruct;

@end
