@class AWEProfileMixCollectionViewCell, AWEUserWorkContext, NSString;

@interface AWEPostWorkHorizontalSectionViewModel : AWEBaseListSectionViewModel <AWEUserWorkSectionViewModelProtocol>

@property (weak, nonatomic) AWEProfileMixCollectionViewCell *horizontalSectionCell;
@property (retain, nonatomic) AWEUserWorkContext *userWorkContext;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (Class)controllerClass;
- (id)sectionManagerClassName;
- (void).cxx_destruct;

@end
