@class NSString;
@protocol ACCAdvanceEditViewModelProtocol;

@interface ACCAdvanceEditConfig : NSObject <DVEEditConfigProtocol>

@property (weak, nonatomic) id<ACCAdvanceEditViewModelProtocol> viewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (double)videoExportMaxSeconds;
- (unsigned long long)videoOverLimitCoverType;
- (void).cxx_destruct;
- (id)initWithViewModel:(id)a0;
- (struct { long long x0; int x1; unsigned int x2; long long x3; })initialSeekTime;

@end
