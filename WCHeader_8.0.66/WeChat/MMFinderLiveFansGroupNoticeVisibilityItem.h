@class NSString, NSMutableAttributedString;

@interface MMFinderLiveFansGroupNoticeVisibilityItem : NSObject

@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSMutableAttributedString *attrSubtitle;
@property (nonatomic) BOOL selected;
@property (nonatomic) BOOL expandable;
@property (nonatomic) BOOL expanded;
@property (retain, nonatomic) Class cellCls;
@property (weak, nonatomic) MMFinderLiveFansGroupNoticeVisibilityItem *expandLinkedItem;
@property (nonatomic) int visibility;

+ (id)itemWithTitle:(id)a0 subtitle:(id)a1 visibility:(int)a2 cellCls:(Class)a3;

- (void).cxx_destruct;

@end
