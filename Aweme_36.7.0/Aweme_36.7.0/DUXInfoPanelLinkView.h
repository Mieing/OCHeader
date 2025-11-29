@class UILabel, NSString;

@interface DUXInfoPanelLinkView : NSObject <DUXInfoPanelContent>

@property (nonatomic) unsigned long long linkType;
@property (retain, nonatomic) UILabel *label;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) id /* block */ duxInfoPanelLinkViewClickAction;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)duxInfoPanel_view;
- (id)duxInfoPanel_view:(id)a0;
- (id)initWithText:(id)a0 clickAction:(id /* block */)a1;
- (void)didClickAction;
- (id)initWithLinkType:(unsigned long long)a0 text:(id)a1 clickAction:(id /* block */)a2;
- (void).cxx_destruct;

@end
