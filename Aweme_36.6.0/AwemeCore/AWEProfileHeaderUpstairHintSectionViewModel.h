@class NSString, AWEProfileHeaderContext;

@interface AWEProfileHeaderUpstairHintSectionViewModel : AWEBaseListSectionViewModel <AWEProfileHeaderSectionViewModelProtocol>

@property (retain, nonatomic) AWEProfileHeaderContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithContext:(id)a0;
- (id)padService;
- (double)topPaddingWithUpperSection:(long long)a0;
- (void).cxx_destruct;
- (long long)sectionType;
- (struct CGSize { double x0; double x1; })sectionSize;

@end
