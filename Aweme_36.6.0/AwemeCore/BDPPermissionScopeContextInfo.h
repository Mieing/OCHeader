@class NSDictionary, BDPUniqueID;

@interface BDPPermissionScopeContextInfo : NSObject

@property (retain, nonatomic) BDPUniqueID *uniqueID;
@property (copy, nonatomic) NSDictionary *paramsDict;

- (void).cxx_destruct;
- (id)initWithUniqueID:(id)a0;

@end
