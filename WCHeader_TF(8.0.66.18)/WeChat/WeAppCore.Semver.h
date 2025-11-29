@class NSString;

@interface WeAppCore.Semver : NSObject <WeAppCore.SemverProtocol> {
    void /* unknown type, empty encoding */ originalStr;
    void /* unknown type, empty encoding */ arrVersion;
    void /* unknown type, empty encoding */ $__lazy_storage_$_major;
    void /* unknown type, empty encoding */ $__lazy_storage_$_minor;
    void /* unknown type, empty encoding */ $__lazy_storage_$_patch;
}

@property (nonatomic, readonly) NSString *originalStr;
@property (nonatomic) void /* unknown type, empty encoding */ isValid;

- (id)initWithVersionStr:(id)a0;
- (BOOL)isSatisfiedBy:(id)a0;
- (id)init;
- (void).cxx_destruct;

@end
