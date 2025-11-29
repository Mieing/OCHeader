@class NSString;

@interface ShowAlbumListExtra : IESLivePBBaseMessage

@property (nonatomic) long long total;
@property (copy, nonatomic) NSString *desc;

+ (id)descriptor;

@end
