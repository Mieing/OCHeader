@class NSString;

@interface SWMidasOriginalUserInfo : NSObject {
    void /* unknown type, empty encoding */ zoneID;
    void /* unknown type, empty encoding */ goodsZoneID;
}

@property (nonatomic, readonly) NSString *zoneID;
@property (nonatomic, readonly) NSString *goodsZoneID;
@property (nonatomic, readonly) void /* unknown type, empty encoding */ amsInfo;
@property (nonatomic, readonly) NSString *description;

- (BOOL)validate;
- (id)initWithZoneID:(id)a0 goodsZoneID:(id)a1 amsInfo:(id)a2;
- (id)init;
- (void).cxx_destruct;

@end
