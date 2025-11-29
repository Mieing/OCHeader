@class NSString, IESECURLModel;

@interface IESECSKUCarAdaptModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isAdapted;
@property (retain, nonatomic) IESECURLModel *icon;
@property (copy, nonatomic) NSString *carDescption;
@property (copy, nonatomic) NSString *jumpURL;
@property (copy, nonatomic) NSString *adaptDescption;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
