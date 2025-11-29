@class NSString;

@interface WCFinderPoiGroupBuyRequestParams : NSObject

@property (nonatomic) unsigned long long groupBuyTab;
@property (copy, nonatomic) NSString *poiId;
@property (retain, nonatomic) NSString *jumpInfoToGroupbuyByPass;
@property (retain, nonatomic) NSString *lastBuffer;
@property (nonatomic) int commentScene;

- (void).cxx_destruct;

@end
