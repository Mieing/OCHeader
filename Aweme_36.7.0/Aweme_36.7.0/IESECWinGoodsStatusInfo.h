@class NSString, IESECURLModel;

@interface IESECWinGoodsStatusInfo : MTLModel <MTLJSONSerializing>

@property (nonatomic) unsigned long long statusType;
@property (retain, nonatomic) IESECURLModel *statusIcon;
@property (copy, nonatomic) NSString *statusText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
