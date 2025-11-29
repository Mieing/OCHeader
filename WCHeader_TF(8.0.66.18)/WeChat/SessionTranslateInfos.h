@class NSString, NSMutableArray;

@interface SessionTranslateInfos : MMObject <PBCoding>

@property (retain, nonatomic) NSString *userName;
@property (retain, nonatomic) NSMutableArray *arrTransInfo;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_userName;
+ (void)PBArrayAdd_arrTransInfo;
+ (void)initialize;

- (id)getPBPropertyTable;
- (id)init;
- (void).cxx_destruct;

@end
