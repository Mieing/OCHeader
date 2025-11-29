@class NSString;

@interface OMJTemplateMetadata : NSObject

@property (readonly, copy, nonatomic) NSString *identifier;
@property (readonly, nonatomic) unsigned long long descVersion;
@property (readonly, nonatomic) NSString *descDownloadURL;
@property (readonly, nonatomic) unsigned long long minimumiOSSDKVersion;
@property (readonly, nonatomic) unsigned long long minimumAndroidSDKVersion;
@property (readonly, nonatomic) NSString *aiModelType;

+ (id)metaDataWithMJTemplate:(id)a0;
+ (id)metaDataWithOMJTemplate:(id)a0;

- (id)initWithIdentifier:(id)a0 descVersion:(unsigned long long)a1 descDownloadURL:(id)a2 minimumiOSSDKVersion:(unsigned long long)a3 minimumAndroidSDKVersion:(unsigned long long)a4 aiModelType:(id)a5;
- (id)initWithIdentifier:(id)a0 descVersion:(unsigned long long)a1 descDownloadURL:(id)a2 minimumiOSSDKVersion:(unsigned long long)a3 minimumAndroidSDKVersion:(unsigned long long)a4;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (id)description;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void).cxx_destruct;

@end
