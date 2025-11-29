@class CSToastStyle;

@interface CSToastManager : NSObject

@property (retain, nonatomic) CSToastStyle *sharedStyle;
@property (nonatomic, getter=isTapToDismissEnabled) BOOL tapToDismissEnabled;
@property (nonatomic, getter=isQueueEnabled) BOOL queueEnabled;
@property (nonatomic) double defaultDuration;
@property (retain, nonatomic) id defaultPosition;

+ (void)setSharedStyle:(id)a0;
+ (void)setDefaultPosition:(id)a0;
+ (void)setQueueEnabled:(BOOL)a0;
+ (BOOL)isQueueEnabled;
+ (BOOL)isTapToDismissEnabled;
+ (void)setTapToDismissEnabled:(BOOL)a0;
+ (void)setDefaultDuration:(double)a0;
+ (id)sharedManager;
+ (double)defaultDuration;
+ (id)sharedStyle;
+ (id)defaultPosition;

- (void).cxx_destruct;
- (id)init;

@end
