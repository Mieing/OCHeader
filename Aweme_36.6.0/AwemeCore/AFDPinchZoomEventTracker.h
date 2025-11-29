@class NSString, NSDictionary, AWEAwemeModel;

@interface AFDPinchZoomEventTracker : NSObject <AFDPinchZoomEventTrackerProtocol>

@property (retain, nonatomic) AWEAwemeModel *model;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSString *enterMethod;
@property (copy, nonatomic) NSString *previousPage;
@property (nonatomic) double startPinchingTime;
@property (nonatomic) BOOL hasZoomOut;
@property (nonatomic) long long currentIndex;
@property (nonatomic) BOOL isFullPage;
@property (copy, nonatomic) NSDictionary *logExtraDict;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)aAWEPlayInteractionAdapterClass;
+ (void)trackPinchZoomForPiPWithModel:(id)a0;

- (id)searchParams;
- (void)configWithPureModeVC:(id)a0 isEnterPinchView:(BOOL)a1 isPinchTransition:(BOOL)a2;
- (void)trackWithZoomType:(long long)a0 logExtra:(id)a1;
- (void)trackWithZoomType:(long long)a0;
- (id)aAWEPlayInteractionAdapter;
- (id)transferZoomTypeToString:(long long)a0;
- (void).cxx_destruct;
- (id)init;

@end
