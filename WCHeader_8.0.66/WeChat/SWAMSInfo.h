@class NSString;

@interface SWAMSInfo : NSObject {
    void /* unknown type, empty encoding */ area;
    void /* unknown type, empty encoding */ platID;
    void /* unknown type, empty encoding */ partition;
    void /* unknown type, empty encoding */ roleID;
    void /* unknown type, empty encoding */ roleName;
}

@property (nonatomic, readonly) NSString *area;
@property (nonatomic, readonly) NSString *platID;
@property (nonatomic, readonly) NSString *partition;
@property (nonatomic, readonly) NSString *roleID;
@property (nonatomic, readonly) NSString *roleName;
@property (nonatomic, readonly) NSString *description;

- (id)initWithArea:(id)a0 platID:(id)a1 partition:(id)a2 roleID:(id)a3 roleName:(id)a4;
- (id)init;
- (void).cxx_destruct;

@end
