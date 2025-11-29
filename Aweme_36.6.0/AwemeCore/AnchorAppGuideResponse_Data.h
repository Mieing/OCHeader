@class AnchorAppGuideResponse_GuideInfo;

@interface AnchorAppGuideResponse_Data : IESLivePBBaseMessage

@property (retain, nonatomic) AnchorAppGuideResponse_GuideInfo *guideInfo;
@property (nonatomic) BOOL hasGuideInfo;

+ (id)descriptor;

@end
