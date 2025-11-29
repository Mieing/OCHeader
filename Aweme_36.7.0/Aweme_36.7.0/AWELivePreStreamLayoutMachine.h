@class NSArray;

@interface AWELivePreStreamLayoutMachine : IESLiveStreamUnifyBaseLayoutMachine

@property (nonatomic) BOOL isNeedUpdateMultiLinkerLayout;
@property (copy, nonatomic) NSArray *multiLinkerGridRatioFrames;
@property (nonatomic) double multiLinkerDistance;
@property (retain, nonatomic) id pkLinkerLayoutProvider;
@property (retain, nonatomic) id linkerLayoutProvider;

- (id)customLayouts;
- (id)supportSEILayoutTypes;
- (void).cxx_destruct;

@end
