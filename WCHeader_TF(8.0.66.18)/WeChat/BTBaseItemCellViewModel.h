@class CContact, BTBaseItemCellView, CMessageWrap, BTMsgSectionData;

@interface BTBaseItemCellViewModel : MMObject {
    double _viewHeight;
}

@property (nonatomic) double viewWidth;
@property (readonly, nonatomic) double viewHeight;
@property (readonly, nonatomic) CMessageWrap *msgWrap;
@property (readonly, nonatomic) CContact *contact;
@property (weak, nonatomic) BTBaseItemCellView *cellView;
@property (weak, nonatomic) BTMsgSectionData *sectionData;
@property (nonatomic) int posInTL;
@property (nonatomic) int msgSectionIndex;
@property (nonatomic) BOOL isTitleUp;

- (id)itemViewClassName;
- (id)createItemCellView;
- (id)initWithMsgWrap:(id)a0 contact:(id)a1 viewWidth:(double)a2;
- (void)updateWithMsgWrap:(id)a0 contact:(id)a1 viewWidth:(double)a2;
- (void).cxx_destruct;

@end
