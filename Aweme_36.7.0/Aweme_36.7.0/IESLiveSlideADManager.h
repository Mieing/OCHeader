@class NSMutableSet, NSMutableDictionary, NSMutableArray;

@interface IESLiveSlideADManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *adRoomsInfo;
@property (retain, nonatomic) NSMutableDictionary *shownRoomsTimestamp;
@property (retain, nonatomic) NSMutableArray *shortShowAdRooms;
@property (nonatomic) double allEcpm;
@property (retain, nonatomic) NSMutableSet *ecpmCountRooms;

+ (id)shared;

- (id)adExtraParam;
- (void)cleanAll;
- (void)updateWithRoom:(id)a0 adExtraString:(id)a1;
- (id)cidForRoom:(id)a0;
- (void)startShowWithLiveRoom:(id)a0;
- (void)endShowWithLiveRoom:(id)a0;
- (void).cxx_destruct;

@end
