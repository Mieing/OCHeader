@class NSString;

@interface LiteAppJsApiSession : LiteAppJsApi

@property (retain, nonatomic) NSString *appId;

- (void)invokeJsApi:(id)a0 param:(id)a1 isFromView:(BOOL)a2;

@end
