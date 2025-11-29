@class NSString, NSArray;

@interface XPlaySettingsValue : NSObject <XPlaySettingsValue>

@property (copy, nonatomic) NSString *keyPath;
@property (nonatomic) unsigned long long settingsTypes;
@property (nonatomic) unsigned long long stable;
@property (copy, nonatomic) id defaultValue;
@property (copy, nonatomic) id stableValue;
@property (copy, nonatomic) NSString *keyDomain;
@property (copy, nonatomic) NSArray *keySubDomain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setupIfNeed;
- (id)initWithKeyPath:(id)a0 settingsTypes:(unsigned long long)a1 stable:(unsigned long long)a2 defaultValue:(id)a3;
- (id)rawValue;
- (void).cxx_destruct;
- (id)exposure;

@end
