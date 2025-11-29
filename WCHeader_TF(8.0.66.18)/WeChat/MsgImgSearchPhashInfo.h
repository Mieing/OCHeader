@class NSString;

@interface MsgImgSearchPhashInfo : MMObject <PBCoding>

@property (copy, nonatomic) NSString *phashStr;
@property (nonatomic) unsigned int expiredTime;
@property (copy, nonatomic) NSString *bubbleTitle;
@property (nonatomic) BOOL hasShowOnce;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_phashStr;
+ (void)PBArrayAdd_expiredTime;
+ (void)PBArrayAdd_bubbleTitle;
+ (void)PBArrayAdd_hasShowOnce;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
