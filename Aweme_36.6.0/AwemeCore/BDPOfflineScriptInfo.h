@class NSString, NSDictionary, NSError, BDPUniqueID;

@interface BDPOfflineScriptInfo : NSObject

@property (nonatomic) BOOL loaded;
@property (retain, nonatomic) NSError *jsError;
@property (copy, nonatomic) NSString *packageName;
@property (copy, nonatomic) NSString *relativePath;
@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (copy, nonatomic) NSString *pageID;
@property (retain, nonatomic) NSDictionary *cachedSetting;
@property (nonatomic) long long trackIsLocal;

- (BOOL)isSame:(id)a0;
- (BOOL)isURLEqual:(id)a0;
- (void).cxx_destruct;
- (BOOL)isValid;
- (BOOL)isEqual:(id)a0;

@end
