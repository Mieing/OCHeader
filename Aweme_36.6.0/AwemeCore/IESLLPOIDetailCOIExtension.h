@class NSString;

@interface IESLLPOIDetailCOIExtension : IESLLPOIBaseExtension

@property (nonatomic) double COIHeaderFirstContentOffsetY;
@property (nonatomic) BOOL COIShowing;
@property (nonatomic) BOOL COIHeaderBeCover;
@property (nonatomic) double maxCOICount;
@property (copy, nonatomic) NSString *referString;
@property (nonatomic) unsigned long long cardDisplayStyle;

- (void)pageDidScroll:(id)a0;
- (void)initializeExtension;
- (id)getHeaderContainerView;
- (void).cxx_destruct;
- (void)dealloc;

@end
