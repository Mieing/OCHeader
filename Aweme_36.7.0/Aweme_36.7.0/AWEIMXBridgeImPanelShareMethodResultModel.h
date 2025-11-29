@class NSNumber, NSArray;

@interface AWEIMXBridgeImPanelShareMethodResultModel : BDXBridgeModel

@property (retain, nonatomic) NSNumber *resultCode;
@property (retain, nonatomic) NSArray *uidList;
@property (retain, nonatomic) NSArray *cidList;
@property (retain, nonatomic) NSArray *secUidList;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
