@class NSMutableSet;

@interface WAUnpackedPackageInfo : NSObject

@property (nonatomic) unsigned long long packageType;
@property (retain, nonatomic) NSMutableSet *setPackageFilePath;
@property (retain, nonatomic) NSMutableSet *setCacheFileInfoKey;

+ (id)packageKeyWithAppId:(id)a0 version:(unsigned long long)a1 isDebugMode:(unsigned long long)a2;

- (id)init;
- (void).cxx_destruct;

@end
