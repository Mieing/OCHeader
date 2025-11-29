@class NSString;

@interface HTSLiveAuctionStartMessageExtra : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *imType;

+ (id)descriptor;

@end
