@class NSString;

@interface TempoiOS.TempoTemplate : NSObject {
    void /* function */ name;
    void /* function */ bizTag;
    void /* function */ url;
    void /* function */ uniqueID;
    void /* function */ geckoVersion;
    void /* unknown type, empty encoding */ miniSDKVersion;
}

@property (nonatomic, copy) NSString *name;
@property (nonatomic, copy) NSString *bizTag;
@property (nonatomic, copy) NSString *url;
@property (nonatomic) BOOL isPreload;
@property (nonatomic, copy) NSString *uniqueID;
@property (nonatomic, copy) NSString *geckoVersion;

- (id)initWithName:(id)a0 url:(id)a1 bizTag:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
