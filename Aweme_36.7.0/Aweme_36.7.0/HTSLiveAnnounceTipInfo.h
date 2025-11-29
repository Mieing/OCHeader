@class NSString;

@interface HTSLiveAnnounceTipInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *tipTxt;
@property (copy, nonatomic) NSString *tipSchema;

+ (id)descriptor;

@end
