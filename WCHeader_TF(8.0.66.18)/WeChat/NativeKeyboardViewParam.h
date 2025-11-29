@class NSString, NSDictionary, FlutterError;

@interface NativeKeyboardViewParam : NSObject

@property (retain, nonatomic) NSString *viewType;
@property (nonatomic) long long viewId;
@property (retain, nonatomic) NSDictionary *config;
@property (nonatomic) FlutterError *error;

- (void).cxx_destruct;

@end
