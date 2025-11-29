@class NSString;

@interface BaseResponseErrMsgHandleConfig : NSObject

@property (nonatomic) BOOL isStrictMode;
@property (copy, nonatomic) id /* block */ handlerConfigBlock;
@property (retain, nonatomic) NSString *defaultMsg;

+ (id)defaultConfig;
+ (id)configWithDefaultMsg:(id)a0;

- (void).cxx_destruct;

@end
