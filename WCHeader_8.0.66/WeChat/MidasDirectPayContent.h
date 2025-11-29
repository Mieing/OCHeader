@class NSString;

@interface MidasDirectPayContent : NSObject <MidasPayKit.MidasPurchaseContent> {
    void /* unknown type, empty encoding */ payInfo;
}

@property (nonatomic, readonly) NSString *payInfo;
@property (nonatomic, retain) void /* unknown type, empty encoding */ targetWindow;
@property (nonatomic, readonly) NSString *description;

- (BOOL)validate;
- (id)initWithPayInfo:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
