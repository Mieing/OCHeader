@class NSString, NSData;

@interface BDPHostPanelContentLotModel : BDPBasePluginModel

@property (copy, nonatomic) NSString *appName;
@property (copy, nonatomic) NSString *appIcon;
@property (retain, nonatomic) NSData *appIconData;
@property (nonatomic) BOOL finished;

- (void).cxx_destruct;

@end
