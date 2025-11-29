@class NSString, NSDate, BDPUniqueID, LynxBackgroundRuntime;

@interface BDPAnnieBackgroundRuntimeModel : NSObject

@property (retain, nonatomic) LynxBackgroundRuntime *runtime;
@property (copy, nonatomic) NSString *groupName;
@property (retain, nonatomic) NSDate *cacheDate;
@property (retain, nonatomic) BDPUniqueID *uniqueID;

- (id)initWithGroupName:(id)a0 lynxBackgroundRuntime:(id)a1;
- (void).cxx_destruct;

@end
