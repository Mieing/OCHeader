@class NSDictionary, IESECLiveGoodsStandardTrackModel, NSString;

@interface IESECLiveCardEventParam : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSDictionary *serverParam;
@property (retain, nonatomic) IESECLiveGoodsStandardTrackModel *standardEventTrack;
@property (retain, nonatomic) NSDictionary *adServerParam;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)standardEventTrackJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
