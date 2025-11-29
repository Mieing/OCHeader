@interface IESLiveGiftEntranceItem : HTSLiveGiftItem

+ (id)itemFromModel:(id)a0 attachingDIContext:(id)a1;

- (BOOL)isSmallGiftComboSend;
- (void)selectFailed;
- (unsigned long long)selectFailedType;
- (BOOL)canGroup;
- (BOOL)canSelect;

@end
