@class AWELiveVSPrivilegeUrl, AWELiveVSPaidInfo;

@interface AWELiveVSPrivilegeInfo : AWEBaseApiModel

@property (nonatomic) long long entityId;
@property (retain, nonatomic) AWELiveVSPrivilegeUrl *privilegeURL;
@property (retain, nonatomic) AWELiveVSPaidInfo *paidInfo;

+ (id)privilegeURLJSONTransformer;
+ (id)paidInfoJSONTransformer;
+ (id)JSONKeyPathsByPropertyKey;

- (void).cxx_destruct;

@end
