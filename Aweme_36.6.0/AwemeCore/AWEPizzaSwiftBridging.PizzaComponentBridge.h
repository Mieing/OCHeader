@class NSString, NSSet;
@protocol AWEPzComponentModelProtocol;

@interface AWEPizzaSwiftBridging.PizzaComponentBridge : NSObject <AWEPzComponentProtocol> {
    void /* unknown type, empty encoding */ coreComponent;
}

@property (nonatomic, readonly) NSString *domainName;
@property (nonatomic, readonly) long long state;
@property (nonatomic, readonly) NSString *componentID;
@property (nonatomic, readonly) NSSet *cTags;
@property (nonatomic, readonly) id attachment;
@property (nonatomic, readonly) NSString *componentType;
@property (nonatomic, readonly) NSSet *sTags;
@property (nonatomic, readonly) id<AWEPzComponentModelProtocol> model;
@property (nonatomic, readonly) BOOL consumed;

- (void).cxx_destruct;
- (void)remove;
- (id)init;
- (void)hide;
- (void)add;
- (void)consume;
- (void)show;

@end
