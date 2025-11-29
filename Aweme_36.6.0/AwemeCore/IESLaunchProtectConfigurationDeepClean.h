@class NSSet, NSArray;

@interface IESLaunchProtectConfigurationDeepClean : NSObject

@property (retain, nonatomic) NSSet *userDefaultsKeyPasslist;
@property (retain, nonatomic) NSSet *documentsDirNamePasslist;
@property (retain, nonatomic) NSSet *libraryDirNamePasslist;
@property (retain, nonatomic) NSArray *keychainQueryPassArray;
@property (retain, nonatomic) NSArray *keychainQueryArray;

- (void).cxx_destruct;
- (id)init;

@end
