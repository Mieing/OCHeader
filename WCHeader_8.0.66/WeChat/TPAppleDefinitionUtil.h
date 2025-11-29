@class NSMutableDictionary;

@interface TPAppleDefinitionUtil : NSObject

@property (retain, nonatomic) NSMutableDictionary *playerDefinitionMap;

+ (id)sharedInstance;

- (id)init;
- (void)addDefinitionMapNodeWithLevel:(int)a0 definition:(int)a1 width:(long long)a2 height:(long long)a3;
- (long long)getWidthByDefLevel:(int)a0;
- (long long)getHeightByDefLevel:(int)a0;
- (int)getDefinitionByDefLevel:(int)a0;
- (void).cxx_destruct;

@end
