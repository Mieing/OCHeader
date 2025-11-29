@class NSString, AWEAwemeModel;

@interface AWEPadFeedVideoPlayManager : NSObject <AWEPadFeedVideoPlayService>

@property (weak, nonatomic) AWEAwemeModel *currentModel;
@property (copy, nonatomic) NSString *firstLandscapeItemId;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)sharedInstance;

@end
