@class NSString;

@interface BDPModalPluginModel : BDPBasePluginModel

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *message;

- (void).cxx_destruct;

@end
