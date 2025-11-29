@class NSString, IESECURLModel;

@interface IESECShopActivityMarqueeModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *nickName;
@property (retain, nonatomic) IESECURLModel *avatar;
@property (copy, nonatomic) NSString *text;
@property (nonatomic) long long type;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
