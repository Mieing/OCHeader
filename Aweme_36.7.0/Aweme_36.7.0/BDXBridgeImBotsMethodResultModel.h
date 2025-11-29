@class NSNumber, NSString, NSArray;

@interface BDXBridgeImBotsMethodResultModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *status;
@property (retain, nonatomic) NSNumber *checkCode;
@property (copy, nonatomic) NSString *checkMessage;
@property (copy, nonatomic) NSString *bizExtraInfo;
@property (retain, nonatomic) NSArray *botInfos;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
