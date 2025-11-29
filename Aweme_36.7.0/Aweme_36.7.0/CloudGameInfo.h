@class NSString;

@interface CloudGameInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *gameId;
@property (copy, nonatomic) NSString *channel;
@property (nonatomic) int gameDirection;
@property (nonatomic) int height;
@property (nonatomic) int width;
@property (copy, nonatomic) NSString *h5URL;
@property (copy, nonatomic) NSString *mobileH5URL;

+ (id)descriptor;

@end
