@class NSString, NSObject;
@protocol PBCoding;

@interface GameHaowanContinueStatePbObj : MMObject <PBCoding>

@property (nonatomic) unsigned int createTime;
@property (nonatomic) unsigned int retryCount;
@property (retain, nonatomic) NSObject<PBCoding> *subState;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)PBArrayAdd_createTime;
+ (void)PBArrayAdd_retryCount;
+ (void)PBArrayAdd_subState;
+ (void)initialize;

- (id)getPBPropertyTable;
- (void).cxx_destruct;

@end
