@class NSString;

@interface AWEIMWatchOnceVideoResourceInfo : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *skey;
@property (copy, nonatomic) NSString *tkey;
@property (copy, nonatomic) NSString *md5;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
