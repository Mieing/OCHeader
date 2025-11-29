@class NSString, AWEIMPublicGroupManagerPageEditViewModel, AWEIMFansGroupMasterStateViewModel;

@interface AWEIMPublicGroupManagerSectionHeaderViewModel : NSObject <AWEIMPublicGroupManagerSectionViewModel>

@property (nonatomic) BOOL editButtonHidden;
@property (nonatomic) BOOL editButtonSelected;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) struct CGSize { double width; double height; } viewSize;
@property (nonatomic) long long section;
@property (weak, nonatomic) AWEIMFansGroupMasterStateViewModel *mainViewModel;
@property (weak, nonatomic) AWEIMPublicGroupManagerPageEditViewModel *pageEditViewModel;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
