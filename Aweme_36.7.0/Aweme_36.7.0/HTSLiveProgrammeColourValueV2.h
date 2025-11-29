@class NSString;

@interface HTSLiveProgrammeColourValueV2 : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *themeCv;
@property (copy, nonatomic) NSString *highlightCv;

+ (id)descriptor;

@end
