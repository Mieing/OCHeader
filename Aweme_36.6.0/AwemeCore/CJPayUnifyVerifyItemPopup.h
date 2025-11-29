@class CJPayUnifyVerifyAccountAppealService;

@interface CJPayUnifyVerifyItemPopup : CJPayUnifyBaseVerifyItem

@property (retain, nonatomic) CJPayUnifyVerifyAccountAppealService *appealService;

- (void)startVerifyWithParams:(id)a0 completionBlock:(id /* block */)a1;
- (id)p_attributedContentWithContentList:(id)a0;
- (id)p_textColorWithHexString:(id)a0;
- (id)p_buttonFontWithBold:(id)a0;
- (void)p_handleClickWithButtonModel:(id)a0 popUpVC:(id)a1 defaultResult:(unsigned long long)a2;
- (void)p_presentCustomAlertVC:(id)a0;
- (id)p_actionToCallbackResultMap;
- (void).cxx_destruct;

@end
