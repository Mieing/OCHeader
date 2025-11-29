@class NSString, NSArray;

@interface BDConfigMockInfo : NSObject

@property (copy, nonatomic) NSString *domain;
@property (copy, nonatomic) NSString *keyPath;
@property (retain, nonatomic) id defaultValue;
@property (nonatomic) BOOL stable;
@property (nonatomic) unsigned long long mockType;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *detail;
@property (copy, nonatomic) NSArray *owners;
@property (copy, nonatomic) NSString *appVersion;
@property (copy, nonatomic) NSArray *linesOfBusiness;

+ (id)getDomainFromIdentifier:(id)a0;
+ (id)getKeyPathFromIdentifier:(id)a0;
+ (id)getIdentifierWithDomain:(id)a0 keyPath:(id)a1;
+ (id)mockInfoWithDomain:(id)a0 keyPath:(id)a1 defaultValue:(id)a2 stable:(BOOL)a3;

- (void).cxx_destruct;
- (id)identifier;

@end
