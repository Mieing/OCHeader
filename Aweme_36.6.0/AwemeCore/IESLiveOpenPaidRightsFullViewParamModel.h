@class NSString, IESLiveOpenPaidRightsFullViewSinglePrivilegeDetailModel, NSDictionary, NSNumber;

@interface IESLiveOpenPaidRightsFullViewParamModel : IESLiveBridgeModel

@property (retain, nonatomic) NSNumber *type;
@property (retain, nonatomic) IESLiveOpenPaidRightsFullViewSinglePrivilegeDetailModel *singlePrivilegeDetail;
@property (copy, nonatomic) NSString *detailUrl;
@property (retain, nonatomic) NSNumber *videoStartIndex;
@property (nonatomic) BOOL needBanRecord;
@property (nonatomic) BOOL needHistoryStart;
@property (copy, nonatomic) NSDictionary *extraMap;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
