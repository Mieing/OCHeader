@class NSString;

@interface MidasEvent : NSObject {
    void /* unknown type, empty encoding */ id;
    void /* unknown type, empty encoding */ format;
    void /* unknown type, empty encoding */ openID;
    void /* unknown type, empty encoding */ offerID;
    void /* unknown type, empty encoding */ platform;
    void /* unknown type, empty encoding */ sessionID;
    void /* unknown type, empty encoding */ sessionType;
    void /* unknown type, empty encoding */ processUUID;
    void /* unknown type, empty encoding */ deviceGUID;
    void /* unknown type, empty encoding */ deviceModel;
    void /* unknown type, empty encoding */ deviceSystemVersion;
    void /* unknown type, empty encoding */ deviceType;
    void /* unknown type, empty encoding */ action;
    void /* unknown type, empty encoding */ billID;
    void /* unknown type, empty encoding */ billUUID;
    void /* unknown type, empty encoding */ resultInfo;
    void /* unknown type, empty encoding */ error;
}

@property (nonatomic, copy) NSString *id;
@property (nonatomic) void /* unknown type, empty encoding */ seq;
@property (nonatomic) void /* unknown type, empty encoding */ createdAt;
@property (nonatomic, readonly) NSString *openID;
@property (nonatomic, readonly) NSString *offerID;
@property (nonatomic, readonly) NSString *platform;
@property (nonatomic, readonly) NSString *sessionID;
@property (nonatomic, readonly) NSString *sessionType;
@property (nonatomic, readonly) NSString *processUUID;
@property (nonatomic, readonly) NSString *deviceGUID;
@property (nonatomic, readonly) NSString *deviceModel;
@property (nonatomic, readonly) NSString *deviceSystemVersion;
@property (nonatomic, readonly) NSString *deviceType;
@property (nonatomic, readonly) NSString *billID;
@property (nonatomic, readonly) NSString *billUUID;
@property (nonatomic, readonly) NSString *formatString;
@property (nonatomic, readonly) NSString *actionString;
@property (nonatomic, readonly) NSString *errorString;
@property (nonatomic, readonly) NSString *resultInfoString;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;

@end
