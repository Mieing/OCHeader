@class NSString, CContact;

@interface WASelectGroupMemberCellView : MMUIView

@property (retain, nonatomic) CContact *contact;
@property (retain, nonatomic) CContact *chatroomContact;
@property (retain, nonatomic) NSString *comment;
@property (nonatomic) BOOL disableSelect;

+ (double)calcHeightForCellWithContact:(id)a0 chatroomContact:(id)a1 comment:(id)a2;

- (id)initWithFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 contact:(id)a1 chatroomContact:(id)a2 comment:(id)a3 disableSelect:(BOOL)a4;
- (void)setupContentView;
- (void).cxx_destruct;

@end
