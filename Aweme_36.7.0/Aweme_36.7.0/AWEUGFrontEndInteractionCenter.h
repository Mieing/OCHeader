@class NSMutableDictionary;

@interface AWEUGFrontEndInteractionCenter : NSObject

@property (retain, nonatomic) NSMutableDictionary *itemIdInteractionTable;

+ (id)sharedInstance;

- (id)interactionForItemId:(id)a0;
- (void)storeInteraction:(id)a0 forItemId:(id)a1;
- (BOOL)enable;
- (void).cxx_destruct;
- (void)removeInteraction:(id)a0;

@end
