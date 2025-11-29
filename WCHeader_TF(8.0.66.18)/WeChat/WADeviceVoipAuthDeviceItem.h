@class NSString;

@interface WADeviceVoipAuthDeviceItem : NSObject

@property (copy, nonatomic) NSString *appId;
@property (copy, nonatomic) NSString *modelId;
@property (copy, nonatomic) NSString *sn;
@property (copy, nonatomic) NSString *name;
@property (nonatomic) unsigned int status;

- (void).cxx_destruct;

@end
