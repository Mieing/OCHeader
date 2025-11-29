@class NSString, NSArray, AWEAwemeModel, NSNumber;

@interface AWELiveLocalLifeAwemeModel : NSObject <IESLiveLocalLifeAwemeModelService>

@property (weak, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) NSString *actionExtra;
@property (nonatomic) BOOL isAds;
@property (copy, nonatomic) NSString *extraAdType;
@property (retain, nonatomic) NSNumber *roomID;
@property (copy, nonatomic) NSString *logExtra;
@property (retain, nonatomic) NSNumber *adID;
@property (retain, nonatomic) NSNumber *creativeID;
@property (retain, nonatomic) NSNumber *groupID;
@property (nonatomic) long long adType;
@property (copy, nonatomic) NSArray *clickTrackURLList;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)setAdIsLiveRoomData:(BOOL)a0;
- (void).cxx_destruct;

@end
