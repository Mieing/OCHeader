@class NSError;

@interface XPlayCloudPermission : NSObject

@property (nonatomic) unsigned long long permissionType;
@property (nonatomic) long long permissionStatus;
@property (retain, nonatomic) NSError *error;

- (void).cxx_destruct;
- (id)description;

@end
