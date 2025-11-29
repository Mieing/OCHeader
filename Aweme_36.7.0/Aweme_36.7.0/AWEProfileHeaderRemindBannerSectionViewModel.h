@class NSString, AWEProfileHeaderContext;

@interface AWEProfileHeaderRemindBannerSectionViewModel : AWEBaseListSectionViewModel <AWEProfileHeaderSectionViewModelProtocol>

@property (nonatomic) BOOL showMessage;
@property (readonly, nonatomic) AWEProfileHeaderContext *context;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)configWithContext:(id)a0;
- (void).cxx_destruct;
- (long long)sectionType;
- (id)init;
- (struct CGSize { double x0; double x1; })sectionSize;

@end
