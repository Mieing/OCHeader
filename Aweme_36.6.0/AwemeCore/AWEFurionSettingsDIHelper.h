@class NSString;
@protocol AWEAppSettingGetterProtocol;

@interface AWEFurionSettingsDIHelper : NSObject <FurionSettingsDIHelper>

@property (retain, nonatomic) id<AWEAppSettingGetterProtocol> handler;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (BOOL)boolValueForKeyPath:(id)a0 defaultValue:(BOOL)a1 stable:(BOOL)a2;
- (id)dictionaryForKeyPath:(id)a0 defaultValue:(id)a1 stable:(BOOL)a2;
- (BOOL)boolValueForKeyPath:(id)a0 defaultValue:(BOOL)a1;
- (id)dictionaryForKeyPath:(id)a0 defaultValue:(id)a1;
- (id)stringForKeyPath:(id)a0 defaultValue:(id)a1;
- (long long)intValueForKeyPath:(id)a0 defaultValue:(long long)a1;
- (id)stringForKeyPath:(id)a0 defaultValue:(id)a1 stable:(BOOL)a2;
- (id)arrayForKeyPath:(id)a0 defaultValue:(id)a1;
- (long long)intValueForKeyPath:(id)a0 defaultValue:(long long)a1 stable:(BOOL)a2;
- (id)objectForKeyPath:(id)a0 defaultValue:(id)a1 stable:(BOOL)a2;
- (id)arrayForKeyPath:(id)a0 defaultValue:(id)a1 stable:(BOOL)a2;
- (double)doubleValueForKeyPath:(id)a0 defaultValue:(double)a1 stable:(BOOL)a2;
- (id)objectForKeyPath:(id)a0 defaultValue:(id)a1;
- (double)doubleValueForKeyPath:(id)a0 defaultValue:(double)a1;
- (void).cxx_destruct;
- (id)init;

@end
