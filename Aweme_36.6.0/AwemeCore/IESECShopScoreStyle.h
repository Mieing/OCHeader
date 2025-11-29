@class NSString, IESECURLModel;

@interface IESECShopScoreStyle : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECURLModel *scoreIcon;
@property (retain, nonatomic) IESECURLModel *halfScoreIcon;
@property (retain, nonatomic) IESECURLModel *emptyScoreIcon;
@property (copy, nonatomic) NSString *fontColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
