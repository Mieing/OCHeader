@class NSString, NSDictionary, BDPUniqueID;

@interface BDPOpenPlatformAuthModel : NSObject

@property (copy, nonatomic) NSString *clientKey;
@property (copy, nonatomic) NSDictionary *scopes;
@property (copy, nonatomic) NSDictionary *identityScope;
@property (copy, nonatomic) NSString *commentID;
@property (nonatomic) BOOL notSkipConfirm;
@property (weak, nonatomic) BDPUniqueID *uniqueID;
@property (copy, nonatomic) NSDictionary *extraData;

- (void).cxx_destruct;

@end
