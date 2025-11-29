@class NSMutableDictionary;

@interface TTVideoEnginePortraitEngine : NSObject

@property (retain, nonatomic) NSMutableDictionary *labelMap;

+ (id)instance;

- (void)setLabel:(id)a0 withKey:(id)a1;
- (id)getLabel:(id)a0;
- (id)getEventData:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
