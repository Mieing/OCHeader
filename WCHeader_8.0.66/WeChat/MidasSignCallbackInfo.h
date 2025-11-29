@class NSString;

@interface MidasSignCallbackInfo : NSObject {
    void /* unknown type, empty encoding */ innerResultCode;
    void /* unknown type, empty encoding */ innerResultMsg;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ resultCode;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ signType;
@property (nonatomic, readonly) NSString *innerResultCode;
@property (nonatomic, readonly) NSString *innerResultMsg;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;

@end
