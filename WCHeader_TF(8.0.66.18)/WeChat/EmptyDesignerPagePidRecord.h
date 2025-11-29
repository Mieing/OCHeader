@class NSString, NSMutableSet;

@interface EmptyDesignerPagePidRecord : MMObject <PBCoding>

@property (retain, nonatomic) NSMutableSet *recordSet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_recordSet;
+ (void)initialize;
+ (id)getSaveRootDir;
+ (id)getSavePath;

- (id)getPBPropertyTable;
- (id)init;
- (void).cxx_destruct;

@end
