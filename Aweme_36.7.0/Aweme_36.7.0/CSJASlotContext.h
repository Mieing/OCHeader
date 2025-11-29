@class CSJAdSlot, NSString, NSNumber, CSJMaterialMeta, CSJAdInfoViewModel, CSJDislikeContext, UIViewController;

@interface CSJASlotContext : NSObject

@property (weak, nonatomic) UIViewController *rootViewController;
@property (copy, nonatomic) NSString *source;
@property (retain, nonatomic) CSJAdSlot *adSlot;
@property (retain, nonatomic) CSJDislikeContext *dislikeContext;
@property (copy, nonatomic) id /* block */ didCloseOtherController;
@property (nonatomic) BOOL fromMiddlePage;
@property (nonatomic) BOOL fromPlayable;
@property (nonatomic) BOOL fromLanddingPage;
@property (nonatomic) double playTimeIfVideo;
@property (nonatomic) double totalPlayTimeIfVideo;
@property (nonatomic) BOOL autoPlayIfVideo;
@property (nonatomic) BOOL isTransform;
@property (retain, nonatomic) NSNumber *currentPlayProgress;
@property (nonatomic) BOOL openPlayableLandingPage;
@property (copy, nonatomic) id /* block */ closePolicyBlock;
@property (retain, nonatomic) CSJMaterialMeta *materialMeta;
@property (retain, nonatomic) CSJAdInfoViewModel *infoViewModel;

- (void).cxx_destruct;

@end
