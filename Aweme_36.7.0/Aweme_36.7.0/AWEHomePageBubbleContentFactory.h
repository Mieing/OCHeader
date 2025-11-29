@class NSMutableDictionary;

@interface AWEHomePageBubbleContentFactory : NSObject <AWEHomePageBubbleContentFactoryProtocol>

@property (retain, nonatomic) NSMutableDictionary *typeToRegisterConfig;

+ (Class)aAWEHomePageBubbleContentFactoryDOUYINLiteAdapterClass;
+ (Class)aAWEHomePageBubbleContentFactoryLGAdapterClass;
+ (Class)aAWEHomePageBubbleContentFactoryDOUYINDSAdapterClass;
+ (id)sharedInstance;

- (id)getContentViewWithContentConfig:(id)a0;
- (void)registerAllBubbleContent;
- (void)registerBubbleContentWithConfig:(id)a0;
- (id)aAWEHomePageBubbleContentFactoryDOUYINLiteAdapter;
- (id)aAWEHomePageBubbleContentFactoryLGAdapter;
- (id)aAWEHomePageBubbleContentFactoryDOUYINDSAdapter;
- (void).cxx_destruct;
- (id)init;

@end
