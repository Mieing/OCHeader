@class NSString, IESECURLModel, NSNumber;

@interface IESECRecommendReasonModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *typeName;
@property (retain, nonatomic) NSString *content;
@property (retain, nonatomic) IESECURLModel *cover;
@property (retain, nonatomic) NSString *rankID;
@property (retain, nonatomic) NSString *uid;
@property (retain, nonatomic) NSNumber *rankNo;
@property (retain, nonatomic) NSString *link;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
