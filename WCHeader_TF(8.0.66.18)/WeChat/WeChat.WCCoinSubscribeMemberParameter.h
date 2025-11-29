@class NSString, NSArray;

@interface WeChat.WCCoinSubscribeMemberParameter : NSObject {
    void /* unknown type, empty encoding */ title;
    void /* unknown type, empty encoding */ subTitle;
    void /* unknown type, empty encoding */ priceTiers;
    void /* unknown type, empty encoding */ protocolWording;
    void /* unknown type, empty encoding */ tips;
    void /* unknown type, empty encoding */ sessionId;
}

@property (nonatomic, readonly) NSString *title;
@property (nonatomic, copy) NSString *subTitle;
@property (nonatomic, readonly) NSArray *priceTiers;
@property (nonatomic, readonly) NSString *protocolWording;
@property (nonatomic, readonly) NSArray *tips;
@property (nonatomic, retain) void /* unknown type, empty encoding */ topIcon;
@property (nonatomic, copy) NSString *sessionId;

- (id)initWithTitle:(id)a0 priceTiers:(id)a1 protocolWording:(id)a2 tips:(id)a3;
- (id)init;
- (void).cxx_destruct;

@end
