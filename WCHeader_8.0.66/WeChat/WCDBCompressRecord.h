@class NSString, NSMutableDictionary;

@interface WCDBCompressRecord : NSObject <PBCoding>

@property (retain, nonatomic) NSMutableDictionary *records;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_records;
+ (void)initialize;

- (id)init;
- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
