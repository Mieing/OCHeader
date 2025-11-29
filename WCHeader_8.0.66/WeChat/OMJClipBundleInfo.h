@class NSString;

@interface OMJClipBundleInfo : NSObject

@property (readonly, nonatomic) NSString *bundleID;
@property (readonly, nonatomic) unsigned long long bundleSize;

- (id)initWithBundleID:(id)a0 bundleSize:(unsigned long long)a1;
- (void).cxx_destruct;

@end
