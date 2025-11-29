@class NSArray, NSString, IESECGoodsDetailAuthorReputationModel, IESECWinAuthorFansInfo;

@interface IESECWinHeaderFansCommentsModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) NSArray *impressionWords;
@property (retain, nonatomic) IESECWinAuthorFansInfo *fansInfo;
@property (retain, nonatomic) IESECGoodsDetailAuthorReputationModel *reputation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)impressionWordsJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
