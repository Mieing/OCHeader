@class NSString, NSMutableSet;

@interface AWEPostLocatePitayaModel : NSObject

@property (copy, nonatomic) NSString *locateItemID;
@property (nonatomic) BOOL hasPredictedLocate;
@property (nonatomic) BOOL hasClickedBtn;
@property (nonatomic) double videoPlayedDuration;
@property (nonatomic) long long videoPlayedCount;
@property (retain, nonatomic) NSMutableSet *prefixPlayedAwemeIDSet;
@property (retain, nonatomic) NSMutableSet *suffixPlayedAwemeIDSet;
@property (nonatomic) BOOL hasPlayedLocateItem;
@property (nonatomic) BOOL usedPreload;

- (void)updateVideoPlay:(id)a0 playTime:(double)a1 dataSource:(id)a2;
- (void).cxx_destruct;
- (id)init;

@end
