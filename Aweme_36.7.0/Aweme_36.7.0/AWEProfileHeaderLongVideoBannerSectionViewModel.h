@class NSString, AWEProfileHeaderContext;

@interface AWEProfileHeaderLongVideoBannerSectionViewModel : AWEBaseListSectionViewModel <AWEProfileHeaderSectionViewModelProtocol>

@property (retain, nonatomic) AWEProfileHeaderContext *context;
@property (readonly, nonatomic) double footerHeight;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithContext:(id)a0;
- (id)padService;
- (double)topPaddingWithUpperSection:(long long)a0;
- (double)bottomPaddingWithLowerSection:(long long)a0;
- (void).cxx_destruct;
- (long long)sectionType;
- (id)init;
- (struct CGSize { double x0; double x1; })sectionSize;

@end
