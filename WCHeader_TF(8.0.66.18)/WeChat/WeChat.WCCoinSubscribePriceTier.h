@class NSString;

@interface WeChat.WCCoinSubscribePriceTier : NSObject {
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ tierDesc;
    void /* unknown type, empty encoding */ bottomDesc;
    void /* unknown type, empty encoding */ confirmButtonWording;
}

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ price;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ type;
@property (nonatomic, copy) NSString *tierDesc;
@property (nonatomic, readonly) NSString *bottomDesc;
@property (nonatomic, copy) NSString *confirmButtonWording;
@property (nonatomic, weak) void /* unknown type, empty encoding */ delegate;
@property (nonatomic) void /* unknown type, empty encoding */ showDiscountTitle;
@property (nonatomic) void /* unknown type, empty encoding */ originPrice;
@property (nonatomic, retain) void /* unknown type, empty encoding */ userInfo;

- (id)initWithTitle:(id)a0 price:(unsigned int)a1 type:(long long)a2 delegate:(id)a3 bottomDesc:(id)a4;
- (id)init;
- (void).cxx_destruct;

@end
