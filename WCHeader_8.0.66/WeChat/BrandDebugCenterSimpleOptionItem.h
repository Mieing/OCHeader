@class BrandDebugCenterSimpleOption, NSString, MMUILabel, NSMutableArray, MMUIButton;

@interface BrandDebugCenterSimpleOptionItem : NSObject <WCActionSheetDelegate, IBrandDebugCenterItemProtocol> {
    NSMutableArray *m_optionArr;
    NSString *m_title;
    id /* block */ m_callback;
    BrandDebugCenterSimpleOption *m_selectedOption;
    MMUIButton *m_itemView;
    MMUILabel *m_titleLabel;
    MMUILabel *m_descLabel;
}

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)addOption:(unsigned int)a0 wording:(id)a1;
- (void)setTitle:(id)a0;
- (void)setSelectedOption:(unsigned int)a0;
- (void)setCallBack:(id /* block */)a0;
- (void)setDisable:(BOOL)a0;
- (id)itemView;
- (void)onTap;
- (void)actionSheet:(id)a0 clickedButtonAtIndex:(long long)a1;
- (void).cxx_destruct;

@end
