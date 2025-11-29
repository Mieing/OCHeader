@interface CameraKit.CameraSessionKey : NSObject <NSCopying> {
    void /* unknown type, empty encoding */ uuid;
}

@property (nonatomic, readonly) long long hash;

- (id)copyWithZone:(void *)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
