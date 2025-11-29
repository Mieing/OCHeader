@class NSString;

@interface EmoticonWordListMeta : NSObject <PBCoding>

@property (nonatomic) unsigned int type;
@property (nonatomic) unsigned long long version;
@property (nonatomic) unsigned long long count;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_type;
+ (void)PBArrayAdd_version;
+ (void)PBArrayAdd_count;
+ (void)initialize;
+ (id)invalidMeta;

@end
