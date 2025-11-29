@class NSString, IESECURLModel;

@interface IESECHeartDiamondCrownModel : MTLModel <MTLJSONSerializing>

@property (retain, nonatomic) IESECURLModel *titleIcon;
@property (retain, nonatomic) IESECURLModel *liveTitleIcon;
@property (retain, nonatomic) IESECURLModel *baseIcon;
@property (retain, nonatomic) IESECURLModel *unlightedIcon;
@property (retain, nonatomic) IESECURLModel *liveUnlightedIcon;
@property (nonatomic) long long baseIconNumber;
@property (nonatomic) long long level;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *liveTextColor;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
