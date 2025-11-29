@class BrandProfileMsgBaseCell, BrandProfileMessageSectionData;

@interface BrandProfileMsgBaseViewModel : MMObject {
    double _cellHeight;
}

@property (readonly, nonatomic) double cellWidth;
@property (readonly, nonatomic) double cellHeight;
@property (weak, nonatomic) BrandProfileMsgBaseCell *cellView;
@property (weak, nonatomic) BrandProfileMessageSectionData *sectionData;

- (double)calCellHeight;
- (void)clearLayoutCache;
- (id)tableViewCellClassName;
- (void).cxx_destruct;

@end
