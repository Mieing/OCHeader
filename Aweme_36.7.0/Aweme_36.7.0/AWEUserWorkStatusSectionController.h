@class NSString;

@interface AWEUserWorkStatusSectionController : AWEBaseListSectionController <AWEDCFeedSectionControllerProtocol>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (Class)sectionViewModelClass;

@end
