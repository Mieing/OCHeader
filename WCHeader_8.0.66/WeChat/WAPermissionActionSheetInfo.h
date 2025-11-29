@class NSData, NSString;

@interface WAPermissionActionSheetInfo : NSObject <PBCoding, WCTColumnCoding>

@property (nonatomic) BOOL isOpenComment;
@property (nonatomic) BOOL isNeedEvaluateBeforeExit;
@property (nonatomic) unsigned int popEvaluateLeastStayTime;
@property (retain, nonatomic) NSData *controlBytes;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_isOpenComment;
+ (void)PBArrayAdd_isNeedEvaluateBeforeExit;
+ (void)PBArrayAdd_popEvaluateLeastStayTime;
+ (void)PBArrayAdd_controlBytes;
+ (void)initialize;
+ (id)unarchiveWithWCTValue:(id)a0;
+ (unsigned long long)columnType;

@end
