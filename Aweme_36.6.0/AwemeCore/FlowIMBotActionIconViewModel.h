@class NSString;

@interface FlowIMBotActionIconViewModel : NSObject {
    void /* function */ type;
    void /* function */ defaultUrl;
    void /* function */ activeUrl;
}

@property (nonatomic, copy) NSString *type;
@property (nonatomic, copy) NSString *defaultUrl;
@property (nonatomic, copy) NSString *activeUrl;
@property (nonatomic, readonly) long long hash;

- (void).cxx_destruct;
- (id)init;
- (BOOL)isEqual:(id)a0;

@end
