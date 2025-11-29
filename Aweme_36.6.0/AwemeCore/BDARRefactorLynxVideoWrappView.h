@class BDARVSDKVideoService, NSString;
@protocol BDARLynxContext;

@interface BDARRefactorLynxVideoWrappView : UIView <BDARLynxPlayer>

@property (retain, nonatomic) BDARVSDKVideoService *videoService;
@property (weak, nonatomic) id<BDARLynxContext> lynxContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
