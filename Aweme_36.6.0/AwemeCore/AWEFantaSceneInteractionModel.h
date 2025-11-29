@class NSString, NSMutableDictionary, NSMutableArray;

@interface AWEFantaSceneInteractionModel : NSObject <NSCoding, NSCopying>

@property (copy, nonatomic) NSString *referString;
@property (retain, nonatomic) NSMutableDictionary *interactionDict;
@property (nonatomic) long long maxRecordVideoCount;
@property (nonatomic) long long hasRecordVideoCount;
@property (retain, nonatomic) NSMutableArray *interactionRecordList;

- (void)decreaseInteractionCount:(id)a0;
- (void)cleanInteraction;
- (long long)interactionCountWithInteraction:(id)a0;
- (void)increaseInteractionCount:(id)a0;
- (void)onVideoSwitch;
- (void).cxx_destruct;
- (id)init;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
