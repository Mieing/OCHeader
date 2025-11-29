@class NSString;

@interface WCPayKindaCacheBoolInfo : NSObject <PBCoding>

@property (nonatomic) long long expired_time;
@property (nonatomic) BOOL data;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_expired_time;
+ (void)PBArrayAdd_data;
+ (void)initialize;
+ (id)GenFromDictionary:(id)a0;

- (id)getPBPropertyTable;
- (void)genFromDic:(id)a0;

@end
