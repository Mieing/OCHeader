@class WCDataItem, NSString, NSMutableDictionary, WCMomentsJumpData;

@interface WCMomentsClickOptions : NSObject

@property (retain, nonatomic) WCDataItem *dataItem;
@property (copy, nonatomic) NSString *urlString;
@property (copy, nonatomic) NSString *backupUrlString;
@property (nonatomic) long long clickScene;
@property (nonatomic) int contactInfoScene;
@property (nonatomic) long long adExposureScene;
@property (readonly, nonatomic) NSMutableDictionary *userInfo;
@property (retain, nonatomic) WCMomentsJumpData *jumpData;

+ (id)clickOptions;

- (void).cxx_destruct;

@end
