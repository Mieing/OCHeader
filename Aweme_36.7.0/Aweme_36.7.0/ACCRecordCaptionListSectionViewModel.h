@interface ACCRecordCaptionListSectionViewModel : AWEBaseListSectionViewModel

@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } inset;
@property (nonatomic) double lineSpacing;

+ (BOOL)useCellViewModel;

@end
