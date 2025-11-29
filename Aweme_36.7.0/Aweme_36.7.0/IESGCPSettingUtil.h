@class NSString;
@protocol IESGCPLiveSettingService, IESGCPSettingService;

@interface IESGCPSettingUtil : NSObject <IESGCPSettingInterface>

@property (retain, nonatomic) id<IESGCPSettingService> gcpSettingService;
@property (weak, nonatomic) id<IESGCPLiveSettingService> liveSettingService;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dictionaryValueWithKey:(id)a0 defaultValue:(id)a1;
+ (BOOL)boolValueWithKey:(id)a0 defaultValue:(BOOL)a1;
+ (id)dictionaryValueWithKey:(id)a0 defaultValue:(id)a1 stable:(BOOL)a2;
+ (long long)integerValueWithKey:(id)a0 defaultValue:(long long)a1;
+ (id)arrayValueWithKey:(id)a0 defaultValue:(id)a1 stable:(BOOL)a2;
+ (id)objectValueWithKey:(id)a0 stable:(BOOL)a1 filterContext:(id)a2;
+ (id)objectValueWithKey:(id)a0;
+ (id)arrayValueWithKey:(id)a0 defaultValue:(id)a1;
+ (id)stringValueWithKey:(id)a0 defaultValue:(id)a1;
+ (id)stringValueWithKey:(id)a0 defaultValue:(id)a1 stable:(BOOL)a2;
+ (BOOL)boolValueWithKey:(id)a0 defaultValue:(BOOL)a1 stable:(BOOL)a2;
+ (double)doubleValueWithKey:(id)a0 defaultValue:(double)a1;
+ (id)numberValueWithKey:(id)a0 defaultValue:(id)a1;
+ (double)doubleValueWithKey:(id)a0 defaultValue:(double)a1 stable:(BOOL)a2;
+ (long long)integerValueWithKey:(id)a0 defaultValue:(long long)a1 stable:(BOOL)a2;
+ (id)numberValueWithKey:(id)a0 defaultValue:(id)a1 stable:(BOOL)a2;
+ (id)objectValueWithKey:(id)a0 stable:(BOOL)a1;
+ (id)sharedInstance;

- (void).cxx_destruct;

@end
