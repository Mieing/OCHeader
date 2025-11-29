@class NSString;

@interface BDSCCacheItem : NSObject <BDModelCustom>

@property (nonatomic) BOOL common;
@property (nonatomic) long long useCount;
@property (nonatomic) double cacheTime;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *ip;
@property (copy, nonatomic) NSString *protocolName;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
