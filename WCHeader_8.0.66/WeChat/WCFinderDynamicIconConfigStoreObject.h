@class NSString, NSData;

@interface WCFinderDynamicIconConfigStoreObject : NSObject <PBCoding>

@property (retain, nonatomic) NSString *version;
@property (retain, nonatomic) NSData *content;
@property (nonatomic) long long compressType;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_version;
+ (void)PBArrayAdd_content;
+ (void)PBArrayAdd_compressType;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnType;

- (id)getPBPropertyTable;
- (id)archivedWCTValue;
- (void).cxx_destruct;

@end
