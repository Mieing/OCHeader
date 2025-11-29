@class NSString;

@interface CMCProfileSceneTrackService : NSObject

@property (copy, nonatomic) NSString *creatorUID;
@property (nonatomic) BOOL trackEnabled;

+ (id)allocWithZone:(struct _NSZone { } *)a0;
+ (id)sharedInstance;

- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone { } *)a0;
- (void)reset;
- (id)copyWithZone:(struct _NSZone { } *)a0;

@end
