@class NSString;

@interface QuerySideBarWelfareResponse_SideBarWelfareGuidance : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *mainTitle;
@property (copy, nonatomic) NSString *subTitle;
@property (copy, nonatomic) NSString *imageURL;
@property (copy, nonatomic) NSString *leftButtonText;
@property (copy, nonatomic) NSString *rightButtonText;
@property (copy, nonatomic) NSString *rightButtonSchema;
@property (copy, nonatomic) NSString *extra;

+ (id)descriptor;

@end
