@class NSSet, NSMutableDictionary, NSString, NSDictionary;

@interface BDPrivacyCertValidateContext : NSObject

@property (retain, nonatomic) NSMutableDictionary *mutableExtraValidation;
@property (nonatomic) unsigned long long entryCategory;
@property (copy, nonatomic) NSSet *entryDataTypes;
@property (copy, nonatomic) NSSet *entryActionTypes;
@property (copy, nonatomic) NSString *entryToken;
@property (copy, nonatomic) NSString *entryDomain;
@property (copy, nonatomic) NSDictionary *entryInfo;
@property (copy, nonatomic) NSString *uuid;
@property (copy, nonatomic) NSString *apiClass;
@property (copy, nonatomic) NSString *apiMethod;
@property (copy, nonatomic) NSString *apiDataType;
@property (readonly, copy, nonatomic) NSDictionary *extraValidationInfo;

- (id)entryEventName;
- (void)addExtraValidationFrom:(id)a0;
- (void)addExtraValidationInfo:(id)a0 forKey:(id)a1;
- (id)wrapperTypeEventSuffix;
- (id)sdkTypeEventSuffix;
- (void)removeExtraValidationForKey:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
