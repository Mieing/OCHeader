@class NSMutableArray;

@interface EmoticonStoreExposureReportInfo : NSObject

@property (retain, nonatomic) NSMutableArray *pidList;
@property (retain, nonatomic) NSMutableArray *linkIDList;
@property (retain, nonatomic) NSMutableArray *linkStatusList;
@property (retain, nonatomic) NSMutableArray *linkReportInfoList;
@property (retain, nonatomic) NSMutableArray *infoList;
@property (retain, nonatomic) NSMutableArray *indexList;
@property (retain, nonatomic) NSMutableArray *storeItemList;
@property (retain, nonatomic) NSMutableArray *reqIDList;

- (void).cxx_destruct;

@end
