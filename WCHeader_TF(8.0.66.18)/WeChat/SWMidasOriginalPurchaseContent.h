@class NSString;

@interface SWMidasOriginalPurchaseContent : NSObject <SwiftyMidas.SWMidasPurchaseContent> {
    void /* unknown type, empty encoding */ appleProductID;
    void /* unknown type, empty encoding */ saveValue;
    void /* unknown type, empty encoding */ drmInfo;
    void /* unknown type, empty encoding */ varItem;
}

@property (nonatomic, readonly) NSString *appleProductID;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ appleProductType;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ isGameCoinMode;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ quantity;
@property (nonatomic, readonly) NSString *saveValue;
@property (nonatomic, readonly) NSString *drmInfo;
@property (nonatomic, readonly) NSString *varItem;
@property (nonatomic, readonly) NSString *description;

- (BOOL)validate;
- (id)initWithAppleProductID:(id)a0 appleProductType:(long long)a1 isGameCoinMode:(BOOL)a2 quantity:(long long)a3 saveValue:(id)a4 drmInfo:(id)a5 varItem:(id)a6;
- (id)init;
- (void).cxx_destruct;

@end
