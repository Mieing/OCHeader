@interface PTYCepCallbackConfig : NSObject

@property (nonatomic) BOOL passAllInfo;
@property (nonatomic) BOOL concurrencySafe;

- (id)init;

@end
