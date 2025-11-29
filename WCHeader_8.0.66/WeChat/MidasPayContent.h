@class NSString;

@interface MidasPayContent : NSObject <MidasPayKit.MidasPurchaseContent> {
    void /* unknown type, empty encoding */ urlParams;
}

@property (nonatomic, readonly) NSString *urlParams;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ channel;
@property (nonatomic, retain) void /* unknown type, empty encoding */ targetWindow;
@property (nonatomic, readonly) NSString *description;

- (BOOL)validate;
- (id)initWithUrlParams:(id)a0 channel:(long long)a1;
- (id)init;
- (void).cxx_destruct;

@end
