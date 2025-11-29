@class NSString;

@interface DanceUI._UICustomContentConfiguration : NSObject <DanceUI._UIContentConfigurationInternal> {
    void /* unknown type, empty encoding */ wrappedConfiguration;
    void /* unknown type, empty encoding */ $__lazy_storage_$__wrappedConfigurationIdentifier;
}

@property (nonatomic, readonly) NSString *wrappedConfigurationIdentifier;

- (id)makeContentViewFor:(id)a0;
- (id)updatedFor:(id)a0;
- (id)updatedFor:(id)a0 traitCollection:(id)a1;
- (void).cxx_destruct;
- (id)init;
- (id)createContentView;

@end
