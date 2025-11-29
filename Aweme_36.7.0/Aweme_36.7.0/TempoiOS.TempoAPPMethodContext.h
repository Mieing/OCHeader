@class NSDictionary, NSString, UIView;

@interface TempoiOS.TempoAPPMethodContext : NSObject {
    void /* function */ globalProps;
    void /* function */ uniqueID;
    void /* function */ extendData;
    void /* function */ url;
    void /* unknown type, empty encoding */ methodContext;
}

@property (nonatomic, readonly) NSDictionary *object;
@property (nonatomic, readonly) UIView *rootView;
@property (nonatomic, retain) NSDictionary *data;
@property (nonatomic, copy) NSDictionary *globalProps;
@property (nonatomic, copy) NSString *uniqueID;
@property (nonatomic, copy) NSDictionary *extendData;
@property (nonatomic, copy) NSString *url;

- (void).cxx_destruct;
- (id)init;

@end
