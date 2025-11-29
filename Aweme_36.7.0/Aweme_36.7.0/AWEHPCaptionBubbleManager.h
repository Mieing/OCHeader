@class AWEHPChannelCaptionBubbleTask;
@protocol AWEPzEngineProtocol;

@interface AWEHPCaptionBubbleManager : NSObject

@property (retain, nonatomic) AWEHPChannelCaptionBubbleTask *currentTask;
@property (retain, nonatomic) id<AWEPzEngineProtocol> engine;

+ (id)sharedInstance;

- (id)currentCaptionBubbleTask;
- (id)createCaptionBubbleTask;
- (void)tryShowCaptionBubbleWithTask:(id)a0 canShowCallBack:(id /* block */)a1;
- (void).cxx_destruct;

@end
