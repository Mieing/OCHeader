@class NSString, NSDictionary, AWEAwemeModel, NSNumber, AWEGeneralSearchResponseModel;

@interface AWEAdGeneralSearchLynxComponentMonitorContext : NSObject

@property (retain, nonatomic) NSNumber *adID;
@property (retain, nonatomic) NSNumber *groupID;
@property (retain, nonatomic) NSNumber *creativeID;
@property (nonatomic) BOOL isMerchandiseType;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (nonatomic) long long merchandiseOrder;
@property (nonatomic) long long adStyleType;
@property (nonatomic) BOOL isSearchLynxComponentLoadSucceed;
@property (nonatomic) unsigned long long lynxType;
@property (nonatomic) BOOL isSearchLynxComponentShowResultSucceed;
@property (retain, nonatomic) AWEGeneralSearchResponseModel *generalSearchResponseModel;
@property (copy, nonatomic) NSString *lynxRawDataMd5;
@property (nonatomic) long long lynxLoadDuration;
@property (nonatomic) long long lynxFirstScreenLoadDuration;
@property (nonatomic) long long lynxdataLoadDuration;
@property (retain, nonatomic) NSNumber *groupType;
@property (copy, nonatomic) NSString *logExtra;
@property (copy, nonatomic) NSString *searchLynxComponentMonitorSchema;
@property (copy, nonatomic) NSString *searchLynxComponentFailReason;
@property (copy, nonatomic) NSDictionary *searchCustomExtraData;
@property (nonatomic) BOOL isSearchBrandAd;

- (void).cxx_destruct;

@end
