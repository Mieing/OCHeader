@class HTSLiveMyLiveTab;

@interface IESLiveMyLiveTabData : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveMyLiveTab *tab;
@property (nonatomic) BOOL hasTab;

+ (id)descriptor;

@end
