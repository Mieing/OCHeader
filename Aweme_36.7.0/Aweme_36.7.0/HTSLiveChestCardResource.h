@class NSString;

@interface HTSLiveChestCardResource : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *cardColor;
@property (copy, nonatomic) NSString *cardURL;
@property (copy, nonatomic) NSString *cardBgURL;
@property (copy, nonatomic) NSString *cardMiniURL;
@property (copy, nonatomic) NSString *extra;

+ (id)descriptor;

@end
