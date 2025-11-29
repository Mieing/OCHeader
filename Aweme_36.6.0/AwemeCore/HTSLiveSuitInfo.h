@class NSString, HTSLiveSuitButtonInfo;

@interface HTSLiveSuitInfo : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *suitId;
@property (nonatomic) BOOL isWear;
@property (retain, nonatomic) HTSLiveSuitButtonInfo *suitButtonInfo;
@property (nonatomic) BOOL hasSuitButtonInfo;

+ (id)descriptor;

@end
