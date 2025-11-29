@class NSString;

@interface BDECPigeonLinkInfo : NSObject

@property (copy, nonatomic) NSString *token;
@property (copy, nonatomic) NSString *pigeonSign;
@property (nonatomic) unsigned long long permissionStatus;

- (void).cxx_destruct;

@end
