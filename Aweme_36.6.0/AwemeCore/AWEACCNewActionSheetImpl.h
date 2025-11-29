@class NSString, NSMutableArray, UIView;

@interface AWEACCNewActionSheetImpl : NSObject <AWESubtitleActionSheetDelegate, ACCNewActionSheetProtocol>

@property (retain, nonatomic) UIView *sheet;
@property (retain, nonatomic) NSMutableArray *itemTitles;
@property (retain, nonatomic) NSMutableArray *itemStyles;
@property (retain, nonatomic) NSMutableArray *itemHandlers;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ cancelHandler;

- (void)actionSheetDidClickCancelButton:(id)a0;
- (void)addActionWithTitle:(id)a0 handler:(id /* block */)a1;
- (id)titleForSubtitleActionSheet;
- (id)buttonTextsForSubtitleActionSheet;
- (id)buttonTypesForSubtitleActionSheet;
- (void)didClickedSubtitleActionSheetButtonAtIndex:(long long)a0;
- (void)addActionWithTitle:(id)a0 subtitle:(id)a1 highlighted:(BOOL)a2 handler:(id /* block */)a3;
- (void)addActionWithTitle:(id)a0 subtitle:(id)a1 handler:(id /* block */)a2;
- (void)dismiss;
- (void).cxx_destruct;
- (id)init;
- (void)show;

@end
