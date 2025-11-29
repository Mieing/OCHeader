@interface GTMKeychainAttribute : NSObject {
    void /* unknown type, empty encoding */ attribute;
}

@property (class, nonatomic, readonly) GTMKeychainAttribute *useDataProtectionKeychain;

+ (id)keychainAccessGroupWithName:(id)a0;

- (void).cxx_destruct;
- (id)init;

@end
