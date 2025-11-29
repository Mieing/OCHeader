@class NSString, NSDictionary, BDXBridgeLocalLifeSmartPreloadMethodParamModel;

@interface AWELocalLifeSmartPreloadInfoModel : NSObject

@property (nonatomic) BOOL hasPreloaded;
@property (copy, nonatomic) NSString *schema;
@property (copy, nonatomic) NSDictionary *trackParams;
@property (retain, nonatomic) BDXBridgeLocalLifeSmartPreloadMethodParamModel *paramModel;

- (void).cxx_destruct;

@end
