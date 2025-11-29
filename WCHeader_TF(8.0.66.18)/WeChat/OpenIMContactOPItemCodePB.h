@class NSData, NSString;

@interface OpenIMContactOPItemCodePB : NSObject <PBCoding>

@property (nonatomic) unsigned int oPLogType;
@property (retain, nonatomic) NSData *oPLogData;
@property (retain, nonatomic) NSString *oPLogId;
@property (nonatomic) BOOL isNeedSync;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_oPLogType;
+ (void)PBArrayAdd_oPLogData;
+ (void)PBArrayAdd_oPLogId;
+ (void)PBArrayAdd_isNeedSync;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
