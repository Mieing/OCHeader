@class NSString;

@interface BDCLServiceModel : NSObject

@property (copy, nonatomic) NSString *serviceType;
@property (copy, nonatomic) NSString *serviceId;
@property (copy, nonatomic) NSString *controlURL;
@property (copy, nonatomic) NSString *eventSubURL;
@property (copy, nonatomic) NSString *SCPDURL;

- (void).cxx_destruct;
- (void)setArray:(id)a0;

@end
