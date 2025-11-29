@class NSString;

@interface SWMidasReprovideResp : NSObject {
    void /* unknown type, empty encoding */ billID;
    void /* unknown type, empty encoding */ portalSerialID;
}

@property (nonatomic, readonly) void /* unknown type, empty encoding */ user;
@property (nonatomic, readonly) NSString *billID;
@property (nonatomic, readonly) NSString *portalSerialID;
@property (nonatomic, readonly) NSString *description;

- (id)init;
- (void).cxx_destruct;

@end
