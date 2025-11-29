@class NSString;

@interface BDPPluginPreDownLoadInfo : NSObject <NSCopying, NSCoding>

@property (copy, nonatomic) NSString *pluginId;
@property (copy, nonatomic) NSString *version;
@property (copy, nonatomic) NSString *preloadID;
@property (nonatomic) double preloadTime;
@property (nonatomic) double usedTime;

- (id)usedDictionaryValue;
- (id)initWithDic:(id)a0;
- (void).cxx_destruct;
- (id)dictionaryValue;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
