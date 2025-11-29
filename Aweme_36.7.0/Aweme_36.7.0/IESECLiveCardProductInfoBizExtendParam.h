@class NSString, IESECLiveImageURLModel;

@interface IESECLiveCardProductInfoBizExtendParam : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSString *cover;
@property (retain, nonatomic) IESECLiveImageURLModel *detailCover;
@property (copy, nonatomic) NSString *checkCallback;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)detailCoverJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
