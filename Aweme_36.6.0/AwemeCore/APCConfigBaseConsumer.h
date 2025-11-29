@protocol ACCCreationContext;

@interface APCConfigBaseConsumer : NSObject

@property (readonly, nonatomic) id<ACCCreationContext> context;

- (void).cxx_destruct;
- (id)initWithContext:(id)a0;

@end
