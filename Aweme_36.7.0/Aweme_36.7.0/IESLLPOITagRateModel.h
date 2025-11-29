@class IESLLPOITagRateGradeModel, NSString, IESLLPOISimpleUserInfo, IESLLPOITagRateOrderModel, IESLLAwemeModel, IESLLPOIInfoModel;

@interface IESLLPOITagRateModel : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *rateId;
@property (retain, nonatomic) IESLLPOIInfoModel *poiInfo;
@property (nonatomic) unsigned long long sourceType;
@property (copy, nonatomic) NSString *sourceId;
@property (retain, nonatomic) IESLLPOITagRateGradeModel *rateGrade;
@property (copy, nonatomic) NSString *rateContent;
@property (nonatomic) long long createMsTime;
@property (nonatomic) long long diggCount;
@property (nonatomic) long long userDigged;
@property (retain, nonatomic) IESLLPOISimpleUserInfo *userInfo;
@property (retain, nonatomic) IESLLAwemeModel *awemeInfo;
@property (retain, nonatomic) IESLLPOITagRateOrderModel *orderInfo;
@property (copy, nonatomic) NSString *userRelationTag;
@property (nonatomic) long long awemeExtend;
@property (copy, nonatomic) NSString *labRateTag;
@property (copy, nonatomic) NSString *sourceText;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
