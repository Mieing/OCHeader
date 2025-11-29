@class NSString;

@interface IESGCPPBDoulinkSimpleGameInfo : GPBMessage

@property (copy, nonatomic) NSString *gameId;
@property (copy, nonatomic) NSString *gameName;
@property (copy, nonatomic) NSString *gameIcon;

+ (id)descriptor;

@end
