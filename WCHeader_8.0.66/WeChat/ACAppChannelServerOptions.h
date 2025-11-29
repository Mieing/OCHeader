@class ACSocketServerOptions, ACWebServerOptions;

@interface ACAppChannelServerOptions : NSObject

@property (retain, nonatomic) ACWebServerOptions *webServerOptions;
@property (retain, nonatomic) ACSocketServerOptions *socketServerOptions;
@property (nonatomic) BOOL keepsAppAlive;

- (void).cxx_destruct;

@end
