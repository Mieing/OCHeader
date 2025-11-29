@class NSString;

@interface WCFinderEnterExtraReportInfoModel : NSObject

@property (copy, nonatomic) NSString *jsonInfoByAPI;
@property (copy, nonatomic) NSString *redDotTipsUuid;
@property (nonatomic) unsigned long long isPIPEnter;
@property (nonatomic) unsigned long long pipEnterType;
@property (nonatomic) unsigned long long ref_commentscene;
@property (nonatomic) unsigned long long collection_id;

- (id)init;
- (id)genReportEnterInfoWithCustomDict:(id)a0;
- (void).cxx_destruct;

@end
