@class NSHashTable, AWEInteractionMessageCenterConfig;

@interface AWEInteractionMessageCenter : NSObject

@property (retain, nonatomic) AWEInteractionMessageCenterConfig *config;
@property (retain, nonatomic) NSHashTable *observers;

- (id)initWithConfig:(id)a0 observers:(id)a1;
- (void)setupWithConfig:(id)a0 observers:(id)a1;
- (void)handleMessage:(id)a0;
- (void).cxx_destruct;

@end
