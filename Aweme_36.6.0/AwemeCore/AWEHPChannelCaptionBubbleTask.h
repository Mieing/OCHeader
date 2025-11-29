@class AWEHPCaptionBubbleCallContext, AWEHomePageBubbleTask;
@protocol AWEPzComponentProtocol;

@interface AWEHPChannelCaptionBubbleTask : NSObject <NSCopying>

@property (nonatomic) long long taskID;
@property (nonatomic) BOOL isValid;
@property (nonatomic) BOOL isShowing;
@property (nonatomic) BOOL consumed;
@property (nonatomic) long long showTimeStamp;
@property (retain, nonatomic) AWEHPCaptionBubbleCallContext *context;
@property (retain, nonatomic) AWEHomePageBubbleTask *holdingTask;
@property (copy, nonatomic) id /* block */ showBlock;
@property (copy, nonatomic) id /* block */ clickBlock;
@property (copy, nonatomic) id /* block */ dismissBlock;
@property (copy, nonatomic) id /* block */ completionBlock;
@property (copy, nonatomic) id /* block */ consumeBlock;
@property (retain, nonatomic) id<AWEPzComponentProtocol> component;

+ (id)createTask;

- (void)completionWithSuccess:(BOOL)a0;
- (void)dismissWithReason:(long long)a0;
- (void)showWithResult:(long long)a0;
- (BOOL)isIdenticalWithComponentID:(id)a0;
- (void).cxx_destruct;
- (id)description;
- (void)consume;
- (BOOL)isEqual:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;
- (void)cancel;
- (void)click;
- (id)initWithTaskID:(long long)a0;

@end
