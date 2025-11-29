@class NSString;

@interface MidasUser : NSObject {
    void /* unknown type, empty encoding */ offerID;
    void /* unknown type, empty encoding */ openID;
    void /* unknown type, empty encoding */ openKey;
    void /* unknown type, empty encoding */ sessionID;
    void /* unknown type, empty encoding */ sessionType;
    void /* unknown type, empty encoding */ platform;
    void /* unknown type, empty encoding */ platformKey;
}

@property (nonatomic, readonly) NSString *offerID;
@property (nonatomic, readonly) NSString *openID;
@property (nonatomic, readonly) NSString *openKey;
@property (nonatomic, readonly) NSString *sessionID;
@property (nonatomic, readonly) NSString *sessionType;
@property (nonatomic, readonly) NSString *platform;
@property (nonatomic, readonly) NSString *platformKey;
@property (nonatomic, readonly) NSString *description;

- (BOOL)validate;
- (id)initWithOfferID:(id)a0 openID:(id)a1 openKey:(id)a2 sessionID:(id)a3 sessionType:(id)a4 platform:(id)a5 platformKey:(id)a6;
- (id)init;
- (void).cxx_destruct;

@end
