@class NSString;

@interface WCMomentsDragonCommentInfo : NSObject <PBCoding, NSCoding>

@property (nonatomic) unsigned int fireworkType;
@property (copy, nonatomic) NSString *fireworkText;
@property (copy, nonatomic) NSString *fireworkEmojiKey;
@property (nonatomic) unsigned int fireworkSeed;
@property (readonly, copy, nonatomic) NSString *fireworkID;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)dragonCommentInfoFromServerObject:(id)a0;
+ (id)dragonCommentInfoFromServerBuffer:(id)a0;
+ (void)PBArrayAdd_fireworkType;
+ (void)PBArrayAdd_fireworkText;
+ (void)PBArrayAdd_fireworkEmojiKey;
+ (void)PBArrayAdd_fireworkSeed;
+ (void)initialize;

- (id)toServerObject;
- (id)toServerBuffer;
- (id)getPBPropertyTable;
- (void)encodeWithCoder:(id)a0;
- (id)initWithCoder:(id)a0;
- (BOOL)isEqual:(id)a0;
- (void).cxx_destruct;

@end
