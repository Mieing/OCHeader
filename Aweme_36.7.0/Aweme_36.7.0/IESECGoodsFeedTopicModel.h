@class NSString, IESECURLModel, IESECGoodsFeedTagModel;

@interface IESECGoodsFeedTopicModel : MTLModel <MTLJSONSerializing>

@property (readonly, nonatomic) IESECGoodsFeedTagModel *tagModel;
@property (copy, nonatomic) NSString *ID;
@property (copy, nonatomic) NSString *name;
@property (retain, nonatomic) IESECURLModel *icon;
@property (copy, nonatomic) NSString *urlScheme;
@property (copy, nonatomic) NSString *propertyID;
@property (copy, nonatomic) NSString *propertyName;
@property (copy, nonatomic) NSString *type;
@property (copy, nonatomic) NSString *info;
@property (copy, nonatomic) NSString *categoryID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
