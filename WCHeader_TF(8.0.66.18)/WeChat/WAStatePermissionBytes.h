@class NSArray, NSString;

@interface WAStatePermissionBytes : NSObject <PBCoding, WCTColumnCoding>

@property (retain, nonatomic) NSArray *arrStatePermissionBytes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_arrStatePermissionBytes;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnType;

@end
