@class NSString, AWEPOISimpleUserInfo, AWEPOITagRateGradeModel;

@interface AWEPOIAwemeTagRateInfoModel : MTLModel <MTLJSONSerializing>

@property (nonatomic) BOOL isUnfolded;
@property (copy, nonatomic) NSString *rateId;
@property (retain, nonatomic) AWEPOISimpleUserInfo *userInfo;
@property (retain, nonatomic) NSString *rateContent;
@property (retain, nonatomic) AWEPOITagRateGradeModel *rateGrade;
@property (nonatomic) long long createMsTime;
@property (copy, nonatomic) NSString *lynxUrl;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
