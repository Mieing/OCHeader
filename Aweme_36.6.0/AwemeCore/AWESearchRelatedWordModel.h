@class NSString, AWESearchRelatedVideoWordRecordModel, AWESearchRelatedExtraInfoModel;

@interface AWESearchRelatedWordModel : AWEBaseApiModel

@property (copy, nonatomic) NSString *relatedWord;
@property (retain, nonatomic) AWESearchRelatedVideoWordRecordModel *wordRecord;
@property (copy, nonatomic) NSString *relatedImageURL;
@property (nonatomic) long long randNum;
@property (retain, nonatomic) AWESearchRelatedExtraInfoModel *extraInfo;
@property (nonatomic) BOOL display;

+ (id)wordRecordJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
