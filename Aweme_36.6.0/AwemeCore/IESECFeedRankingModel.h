@class NSString, IESECURLModel;

@interface IESECFeedRankingModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *ID;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *rankingDescription;
@property (retain, nonatomic) IESECURLModel *coverURL;
@property (copy, nonatomic) NSString *scheme;
@property (copy, nonatomic) NSString *typeText;
@property (copy, nonatomic) IESECURLModel *typeIconImageURL;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
