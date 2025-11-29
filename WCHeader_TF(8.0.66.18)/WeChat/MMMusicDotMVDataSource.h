@class NSString, MMMusicMVModel;
@protocol MMMusicDotMVDataSourceDelegate;

@interface MMMusicDotMVDataSource : NSObject

@property (retain, nonatomic) MMMusicMVModel *mvModel;
@property (nonatomic) unsigned int currTimeMs;
@property (nonatomic) int currDotIndex;
@property (weak, nonatomic) id<MMMusicDotMVDataSourceDelegate> delegate;
@property (readonly, nonatomic) BOOL canCreateMV;
@property (nonatomic) unsigned int canCreateMVBitFlag;
@property (readonly, nonatomic) BOOL isCurrentAccountBlocked;
@property (nonatomic) BOOL isChatroomEnabled;
@property (retain, nonatomic) NSString *statusVerifyInfo;
@property (retain, nonatomic) NSString *songId;
@property (nonatomic) unsigned int durationInMs;

- (id)initWithMVModel:(id)a0;
- (void)updateWithMVModel:(id)a0;
- (void)updateTimeInfo:(id)a0 arrFlexBasicClipTrack:(id)a1;
- (void)updateCurrPlayedTime:(unsigned int)a0;
- (unsigned int)getCurrPlayedTimeMs;
- (unsigned int)getCurrIndexFromCurrPlayTime:(unsigned int)a0;
- (void).cxx_destruct;

@end
