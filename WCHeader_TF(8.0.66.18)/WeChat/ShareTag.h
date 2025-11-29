@class NSMutableArray;

@interface ShareTag : WXPBGeneratedMessage

@property (retain, nonatomic) NSMutableArray *shareUser;
@property (retain, nonatomic) NSMutableArray *unshareUser;
@property (retain, nonatomic) NSMutableArray *shareUins;
@property (retain, nonatomic) NSMutableArray *unshareUins;

+ (void)initialize;

@end
