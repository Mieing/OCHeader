@interface IESLCWeakPluginTarget : NSObject

@property (weak, nonatomic) id weakPlugin;

- (void).cxx_destruct;

@end
