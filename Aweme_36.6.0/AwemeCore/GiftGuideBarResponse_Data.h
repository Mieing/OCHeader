@class NSString;

@interface GiftGuideBarResponse_Data : IESLivePBBaseMessage

@property (nonatomic) int showLimit;
@property (copy, nonatomic) NSString *URL;

+ (id)descriptor;

@end
