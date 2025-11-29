@class NSString;

@interface IESIMPopoverService : HTSService <IESIMPopoverService>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)optionWithTitle:(id)a0 selectBlock:(id /* block */)a1;
- (id)actionWithTitle:(id)a0 icon:(id)a1 use:(unsigned long long)a2 selectBlock:(id /* block */)a3;
- (id)popoverWithContent:(id)a0 target:(id)a1 clickBlock:(id /* block */)a2;
- (id)popoverWithContent:(id)a0 target:(id)a1 clickBlock:(id /* block */)a2 enlargeType:(unsigned long long)a3;
- (id)actionPopoverWithActions:(id)a0 target:(id)a1;
- (id)actionPopoverWithActions:(id)a0 target:(id)a1 layoutDirection:(long long)a2;
- (id)actionWithTitle:(id)a0 isOn:(BOOL)a1 switchAction:(id /* block */)a2;
- (id)selectPopoverWithOptions:(id)a0 type:(long long)a1 target:(id)a2;
- (id)popoverLinkViewContentWithText:(id)a0 icon:(id)a1;
- (id)popoverContentWithString:(id)a0;
- (id)popoverContentWithView:(id)a0;
- (id)popoverPositionOffsetWithDirection:(unsigned long long)a0 type:(unsigned long long)a1 value:(double)a2;
- (id)popoverPositionOffsetDefault;
- (long long)p_duxActionPopoverLayoutDirectionWitIESIMLayoutDirection:(long long)a0;
- (unsigned long long)p_duxActionPopoverActionUseWitIESIMActionUse:(unsigned long long)a0;
- (long long)p_duxSelectPopoverOptionViewWithIESIMType:(long long)a0;
- (unsigned long long)p_duxPopoverPositionOffsetDirectionWithIESIMDirection:(unsigned long long)a0;
- (unsigned long long)p_duxPopoverPositionOffsetTypeWithIESIMType:(unsigned long long)a0;

@end
