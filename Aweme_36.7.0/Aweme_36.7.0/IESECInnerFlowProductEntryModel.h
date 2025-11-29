@class NSString, IESECURLModel, IESECInnerFlowProductUIConfigModel;

@interface IESECInnerFlowProductEntryModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long entryType;
@property (retain, nonatomic) IESECURLModel *activeIcon;
@property (retain, nonatomic) IESECURLModel *icon;
@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) IESECInnerFlowProductUIConfigModel *UIConfig;
@property (copy, nonatomic) NSString *entrySchema;
@property (nonatomic) BOOL bookmarked;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
