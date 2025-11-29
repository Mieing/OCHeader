@class NSMutableDictionary;

@interface AWEFantaInteractionCollection : NSObject <NSCoding, NSCopying>

@property (retain, nonatomic) NSMutableDictionary *sceneInteractionDict;
@property (retain, nonatomic) NSMutableDictionary *sceneMaxRecordVideoCountDict;

- (void)updateInteractionCountWithInteraction:(id)a0 referString:(id)a1;
- (long long)interactionCountWithInteraction:(id)a0 referString:(id)a1;
- (void)cleanInteractionCollection;
- (void)onFeedVideoSwitch:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
