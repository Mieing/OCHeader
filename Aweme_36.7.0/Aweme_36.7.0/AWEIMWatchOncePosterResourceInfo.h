@class NSString;

@interface AWEIMWatchOncePosterResourceInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *md5;
@property (copy, nonatomic) NSString *oid;
@property (copy, nonatomic) NSString *skey;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
