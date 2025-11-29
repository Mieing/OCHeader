@class NSString;

@interface HTSLiveInteractionPlayAuthEventParam : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *promoteGameId;
@property (copy, nonatomic) NSString *gameName;

+ (id)descriptor;

@end
