@class NSString;

@interface WAPermissionBytesModel : NSObject

@property (copy, nonatomic) NSString *apiName;
@property (nonatomic) unsigned long long apiIndex;
@property (nonatomic) long long apiRunMode;
@property (nonatomic) long long mainThreadMode;

- (void).cxx_destruct;

@end
