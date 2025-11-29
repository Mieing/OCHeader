@class NSString, IESECLiveImageURLModel;

@interface IESECLiveGoodsListAuthorReputationScoreContent : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECLiveImageURLModel *bgImage;
@property (nonatomic) long long fontSize;
@property (nonatomic) BOOL bold;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *textColor;
@property (nonatomic) long long leftSpace;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
