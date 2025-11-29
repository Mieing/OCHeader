@class NSNumber, NSString;

@interface IESECLiveGoodsAskExplainInfoModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSNumber *status;
@property (retain, nonatomic) NSNumber *userCount;
@property (retain, nonatomic) NSNumber *rank;
@property (copy, nonatomic) NSString *rankIconUrl;
@property (nonatomic) BOOL canAskExplain;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
