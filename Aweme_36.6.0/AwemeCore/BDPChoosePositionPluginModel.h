@class NSString;

@interface BDPChoosePositionPluginModel : BDPBasePluginModel

@property (nonatomic) double latitude;
@property (nonatomic) double longitude;
@property (nonatomic) long long scale;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *address;
@property (nonatomic) BOOL requiredName;

- (void).cxx_destruct;

@end
