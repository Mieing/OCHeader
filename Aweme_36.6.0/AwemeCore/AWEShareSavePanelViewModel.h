@class AWEShareSaveAlertViewModel, NSString, NSAttributedString;

@interface AWEShareSavePanelViewModel : NSObject <AWEShareSaveViewModelProtocol>

@property (nonatomic) double height;
@property (retain, nonatomic) AWEShareSaveAlertViewModel *model;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSAttributedString *attMessage;
@property (nonatomic) struct CGSize { double width; double height; } messageSize;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithModel:(id)a0 hasIMUser:(BOOL)a1;
- (void).cxx_destruct;

@end
