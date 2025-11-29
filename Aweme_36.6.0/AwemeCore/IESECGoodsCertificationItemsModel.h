@class NSString, IESECURLModel;

@interface IESECGoodsCertificationItemsModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL useFlag;
@property (retain, nonatomic) IESECURLModel *icon;
@property (copy, nonatomic) NSString *content;
@property (copy, nonatomic) NSString *contentColor;
@property (nonatomic) double leftDistance;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
