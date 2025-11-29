@class NSString, NSDictionary, NSArray, NSNumber;

@interface AWEAdLiveLynxCardAdInfoResultModel : BDXBridgeModel

@property (retain, nonatomic) NSDictionary *adInfo;
@property (copy, nonatomic) NSString *adID;
@property (retain, nonatomic) NSNumber *adType;
@property (retain, nonatomic) NSNumber *cid;
@property (copy, nonatomic) NSString *groupID;
@property (copy, nonatomic) NSString *logExtra;
@property (copy, nonatomic) NSArray *trackUrlList;
@property (copy, nonatomic) NSString *SKANParameters;
@property (retain, nonatomic) NSNumber *videoDuration;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
