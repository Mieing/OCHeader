@class NSString, AWEProfileHeaderContext;

@interface AWEProfileHeaderTagAreaSectionViewModel : AWEBaseListSectionViewModel <AWEProfileHeaderSectionViewModelProtocol>

@property (retain, nonatomic) AWEProfileHeaderContext *context;
@property (nonatomic) double realHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithContext:(id)a0;
- (id)padService;
- (double)topPaddingWithUpperSection:(long long)a0;
- (double)bottomPaddingWithLowerSection:(long long)a0;
- (void)refreshProfileTagHeight:(double)a0;
- (void).cxx_destruct;
- (long long)sectionType;
- (struct CGSize { double x0; double x1; })sectionSize;

@end
