@interface AWEPhotoToVideoMonitorInfo : NSObject

@property (nonatomic) double singleMVListEndTime;
@property (nonatomic) BOOL singleMVListFailed;
@property (nonatomic) double multiMVListEndTime;
@property (nonatomic) BOOL multiMVListFailed;
@property (nonatomic) double singleMVEndTime;
@property (nonatomic) BOOL singleMVFailed;
@property (nonatomic) double multiMVEndTime;
@property (nonatomic) BOOL multiMVFailed;
@property (nonatomic) double musicListEndTime;
@property (nonatomic) BOOL musicListFailed;
@property (nonatomic) double musicEndTime;
@property (nonatomic) BOOL musicFailed;
@property (nonatomic) long long musicCount;
@property (nonatomic) double textVideoEndTime;
@property (nonatomic) BOOL textVideoFailed;

- (void)updateTemplateListSuccess:(BOOL)a0 panel:(id)a1;
- (void)updateTemplateWithSuccess:(BOOL)a0 panel:(id)a1;
- (void)updateMusicInfoWithIsList:(BOOL)a0 success:(BOOL)a1;

@end
