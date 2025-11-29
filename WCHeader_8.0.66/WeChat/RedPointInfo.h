@class NSString;

@interface RedPointInfo : NSObject <PBCoding>

@property (retain, nonatomic) NSString *redPointPath;
@property (nonatomic) unsigned int redPointID;
@property (nonatomic) unsigned int mustClearInSameTime;
@property (nonatomic) unsigned int recieveTime;
@property (retain, nonatomic) NSString *extInfoString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_redPointPath;
+ (void)PBArrayAdd_redPointID;
+ (void)PBArrayAdd_mustClearInSameTime;
+ (void)PBArrayAdd_recieveTime;
+ (void)PBArrayAdd_extInfoString;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
