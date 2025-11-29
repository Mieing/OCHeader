@class NSString;

@interface TTAccountThirdPartyAuthXBridgeInfo : TTAccountCommonModel

@property (copy, nonatomic) NSString *platform;
@property (nonatomic) BOOL needRawData;
@property (retain, nonatomic) NSString *method;

- (void).cxx_destruct;

@end
