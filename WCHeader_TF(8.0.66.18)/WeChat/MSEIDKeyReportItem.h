@class NSString;

@interface MSEIDKeyReportItem : NSObject <PBCoding>

@property (nonatomic) unsigned int ID;
@property (nonatomic) unsigned int key;
@property (nonatomic) unsigned int value;
@property (nonatomic) BOOL isKeyLog;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_ID;
+ (void)PBArrayAdd_key;
+ (void)PBArrayAdd_value;
+ (void)PBArrayAdd_isKeyLog;
+ (void)initialize;

- (id)getPBPropertyTable;

@end
