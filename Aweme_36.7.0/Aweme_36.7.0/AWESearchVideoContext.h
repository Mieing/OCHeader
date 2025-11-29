@class NSString, AWEPlayVideoPlayerContext, UIImage, NSDictionary;
@protocol AWESearchVideoReuseHandlerDelegate;

@interface AWESearchVideoContext : NSObject <AWESearchElementReuseContextProtocol>

@property (weak, nonatomic) id<AWESearchVideoReuseHandlerDelegate> reuseTarget;
@property (copy, nonatomic) NSString *reuseIdentifier;
@property (retain, nonatomic) UIImage *snapShotImg;
@property (nonatomic) double time;
@property (nonatomic) BOOL hasUpdatedAweme;
@property (retain, nonatomic) AWEPlayVideoPlayerContext *playerContext;
@property (retain, nonatomic) NSDictionary *logExtra;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) BOOL repeat;
@property (nonatomic) long long scaleMode;
@property (nonatomic) long long coverContentMode;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
