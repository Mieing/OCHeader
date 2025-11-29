@class NSString, NSDictionary, AWESurveyClientInfoModel;

@interface AWESurveyInfoModel : AWEBaseApiModel

@property (readonly, copy, nonatomic) NSString *settingKey;
@property (readonly, copy, nonatomic) NSString *schema;
@property (readonly, copy, nonatomic) NSString *feData;
@property (readonly, copy, nonatomic) NSString *clientData;
@property (readonly, copy, nonatomic) NSString *extra;
@property (nonatomic) unsigned long long status;
@property (copy, nonatomic) NSDictionary *logExtra;
@property (copy, nonatomic) AWESurveyClientInfoModel *clientInfoModel;
@property (nonatomic) double loadDuration;

+ (id)JSONKeyPathsByPropertyKey;

- (void)setExtra:(id)a0;
- (void).cxx_destruct;
- (void)setClientData:(id)a0;

@end
