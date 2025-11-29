@class NSString, NSDictionary, AWEAwemeModel, NSArray, AWENearbyResourceOfFrequencyInfo, AWENearbyForwardTabExtraInfoModel;

@interface AWENearbyTabForwardContext : NSObject

@property (retain, nonatomic) NSString *sourceSchema;
@property (retain, nonatomic) NSString *completeOpenSchema;
@property (retain, nonatomic) NSString *componentId;
@property (retain, nonatomic) NSString *componentContent;
@property (nonatomic) BOOL hasShown;
@property (retain, nonatomic) NSDictionary *trackParams;
@property (retain, nonatomic) AWEAwemeModel *insertFeedCardModel;
@property (copy, nonatomic) id /* block */ precheckBlk;
@property (nonatomic) long long forwardType;
@property (retain, nonatomic) NSArray *triggerList;
@property (retain, nonatomic) AWENearbyResourceOfFrequencyInfo *frequencyData;
@property (nonatomic) long long insertIndex;
@property (nonatomic) BOOL insertRecentInvisibleIndex;
@property (nonatomic) BOOL hasInserted;
@property (retain, nonatomic) AWENearbyForwardTabExtraInfoModel *extraInfo;

- (void).cxx_destruct;

@end
