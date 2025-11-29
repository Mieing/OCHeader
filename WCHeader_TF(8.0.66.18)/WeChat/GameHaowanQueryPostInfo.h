@class NSString;

@interface GameHaowanQueryPostInfo : GameHaowanBasePostInfo

@property (retain, nonatomic) NSString *postId;
@property (nonatomic) BOOL isBroken;

+ (id)createFromDbItem:(id)a0;

- (void).cxx_destruct;

@end
