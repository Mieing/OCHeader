@class TopAreaComponent_CoverSubComponent, BaseComponent, TopAreaComponent_TitleSubComponent, TopAreaComponent_LocationSubComponent, TopAreaComponent_AudienceLimitSubComponent, TopAreaComponent_VisibilitySubComponent;

@interface TopAreaComponent : IESLivePBBaseMessage

@property (retain, nonatomic) BaseComponent *base;
@property (nonatomic) BOOL hasBase;
@property (retain, nonatomic) TopAreaComponent_TitleSubComponent *titleSubComponent;
@property (nonatomic) BOOL hasTitleSubComponent;
@property (retain, nonatomic) TopAreaComponent_CoverSubComponent *coverSubComponent;
@property (nonatomic) BOOL hasCoverSubComponent;
@property (retain, nonatomic) TopAreaComponent_LocationSubComponent *locationSubComponent;
@property (nonatomic) BOOL hasLocationSubComponent;
@property (retain, nonatomic) TopAreaComponent_VisibilitySubComponent *visibilitySubComponent;
@property (nonatomic) BOOL hasVisibilitySubComponent;
@property (retain, nonatomic) TopAreaComponent_AudienceLimitSubComponent *audienceLimitSubComponent;
@property (nonatomic) BOOL hasAudienceLimitSubComponent;

+ (id)descriptor;

@end
