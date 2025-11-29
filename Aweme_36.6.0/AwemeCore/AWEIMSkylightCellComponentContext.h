@class AWEIMSkylightCommonCell, NSString, AWEIMSkylightCellViewModel;
@protocol AWEIMSkylightCellViewModelProtocol;

@interface AWEIMSkylightCellComponentContext : AWEIMComponentContext <AWEIMSkylightCellContextProtocol>

@property (weak, nonatomic) AWEIMSkylightCommonCell *attachCell;
@property (weak, nonatomic) AWEIMSkylightCellViewModel<AWEIMSkylightCellViewModelProtocol> *cellViewModel;
@property (nonatomic) BOOL disableLongPress;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (unsigned long long)vmType;
- (void).cxx_destruct;
- (id)cellModel;

@end
