@class NSString;

@interface AWELiveSplitScreenServiceImpl : NSObject <IESLiveSplitScreenService>

@property (nonatomic) BOOL addPadParam;
@property (nonatomic) double appWidth;
@property (nonatomic) double appHeight;
@property (nonatomic) double appRatio;
@property (retain, nonatomic) NSString *sizeString;
@property (retain, nonatomic) NSString *ratioString;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

- (void)willCommitTrackEvent:(id)a0 params:(id)a1;
- (double)fetchScreenAvailableHeight;
- (BOOL)isSplitScreenMode;
- (double)fetchScreenAvailableWidth;
- (id)fetchAppSizeString;
- (id)fetchAppRatioString;
- (void)splitScreenBreakPointUpdateAction:(id)a0;
- (id)simplifiedRatioStringWithWidth:(double)a0 height:(double)a1;
- (void).cxx_destruct;
- (id)init;
- (void)dealloc;

@end
