@class NSString, NSMutableArray;

@interface WAPermissionWeAppBindInfo : NSObject <PBCoding, WCTColumnCoding>

@property (retain, nonatomic) NSMutableArray *arrJumpToAppInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_arrJumpToAppInfo;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnType;

@end
