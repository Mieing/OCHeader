@class NSString;

@interface ReceiveSideBarWelfareResponse_WelfareInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *welfareId;
@property (copy, nonatomic) NSString *welfareTitle;
@property (copy, nonatomic) NSString *welfareImage;
@property (copy, nonatomic) NSString *consumePath;
@property (copy, nonatomic) NSString *jumpText;
@property (copy, nonatomic) NSString *extraInfo;
@property (copy, nonatomic) NSString *consumeDesc;
@property (copy, nonatomic) NSString *originId;

+ (id)descriptor;

@end
