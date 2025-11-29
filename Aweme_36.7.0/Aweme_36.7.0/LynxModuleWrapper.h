@class NSString;

@interface LynxModuleWrapper : NSObject

@property (retain, nonatomic) Class moduleClass;
@property (retain, nonatomic) id param;
@property (weak, nonatomic) NSString *namescope;

- (void).cxx_destruct;

@end
