@class NSString, IESECSKUBottomButtonUIModel, IESECURLModel;

@interface IESECSKUBottomButtonModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long buttonType;
@property (copy, nonatomic) NSString *jumpURL;
@property (copy, nonatomic) NSString *label;
@property (nonatomic) BOOL isGray;
@property (nonatomic) BOOL hideCountdown;
@property (retain, nonatomic) IESECSKUBottomButtonUIModel *displayUIParam;
@property (retain, nonatomic) IESECSKUBottomButtonUIModel *disableUIParam;
@property (retain, nonatomic) IESECURLModel *icon;
@property (nonatomic) BOOL newType;
@property (nonatomic) BOOL originDisable;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
