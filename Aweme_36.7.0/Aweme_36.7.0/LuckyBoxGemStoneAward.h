@class NSString, HTSLiveImage;

@interface LuckyBoxGemStoneAward : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *icon;
@property (nonatomic) BOOL hasIcon;
@property (nonatomic) long long count;
@property (copy, nonatomic) NSString *desc;
@property (copy, nonatomic) NSString *schemaURL;

+ (id)descriptor;

@end
