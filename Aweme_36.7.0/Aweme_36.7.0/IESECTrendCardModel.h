@class NSString, IESECURLModel;

@interface IESECTrendCardModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) long long trendID;
@property (retain, nonatomic) IESECURLModel *coverImage;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *desc;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
