@class HTSLiveImage;

@interface IESLiveListTagEcomViewContent : IESLivePBBaseMessage

@property (retain, nonatomic) HTSLiveImage *ecomViewTag;
@property (nonatomic) BOOL hasEcomViewTag;

+ (id)descriptor;

@end
