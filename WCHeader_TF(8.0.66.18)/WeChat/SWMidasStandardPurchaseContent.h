@class NSString;

@interface SWMidasStandardPurchaseContent : NSObject <SwiftyMidas.SWMidasPurchaseContent> {
    void /* unknown type, empty encoding */ urlParams;
}

@property (nonatomic, readonly) NSString *urlParams;
@property (nonatomic, readonly) NSString *description;

- (BOOL)validate;
- (id)initWithUrlParams:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
