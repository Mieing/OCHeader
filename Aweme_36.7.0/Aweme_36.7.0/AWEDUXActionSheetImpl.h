@class NSString, DUXActionSheet, NSArray;
@protocol ACCDUXActionSheetDelegate;

@interface AWEDUXActionSheetImpl : NSObject <DUXActionSheetDelegate, ACCDUXActionSheetProtocol>

@property (retain, nonatomic) DUXActionSheet *sheet;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (weak, nonatomic) id<ACCDUXActionSheetDelegate> delegate;
@property (copy, nonatomic) NSArray *itemTexts;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) id /* block */ actionHandler;

- (void)actionSheet:(id)a0 didClickButtonAtIndex:(long long)a1;
- (id)p_title;
- (id)p_actionItems;
- (void).cxx_destruct;
- (void)dealloc;
- (void)show;
- (void)showInView:(id)a0;

@end
