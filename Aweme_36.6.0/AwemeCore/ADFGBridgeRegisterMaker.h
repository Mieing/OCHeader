@class NSString;

@interface ADFGBridgeRegisterMaker : NSObject

@property (copy, nonatomic) NSString *pluginNameValue;
@property (copy, nonatomic) NSString *bridgeNameValue;
@property (copy, nonatomic) id /* block */ handlerValue;
@property (readonly, copy, nonatomic) id /* block */ pluginName;
@property (readonly, copy, nonatomic) id /* block */ handler;
@property (readonly, copy, nonatomic) id /* block */ bridgeName;

- (void).cxx_destruct;

@end
