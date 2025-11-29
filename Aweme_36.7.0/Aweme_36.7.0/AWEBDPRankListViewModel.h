@class NSString, AWEBDPSelfUserInfoModel, NSMutableDictionary, NSNumber;

@interface AWEBDPRankListViewModel : NSObject

@property (copy, nonatomic) NSString *suffix;
@property (copy, nonatomic) NSString *rankType;
@property (copy, nonatomic) NSString *rankTitle;
@property (copy, nonatomic) NSString *relationType;
@property (copy, nonatomic) NSNumber *dataType;
@property (copy, nonatomic) NSString *zoneId;
@property (retain, nonatomic) AWEBDPSelfUserInfoModel *selfUserInfo;
@property (retain, nonatomic) NSMutableDictionary *rankModelMap;
@property BOOL shouldShowRetryView;

- (BOOL)modelCustomTransformFromDictionary:(id)a0;
- (BOOL)updateWithData:(id)a0 relationType:(id)a1;
- (void)addItemsWithModel:(id)a0 relationType:(id)a1;
- (BOOL)needHideSelfItemWithRelationType:(id)a0;
- (void).cxx_destruct;
- (void)resetState;

@end
