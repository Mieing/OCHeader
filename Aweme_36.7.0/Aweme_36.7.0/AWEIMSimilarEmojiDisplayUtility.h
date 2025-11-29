@interface AWEIMSimilarEmojiDisplayUtility : NSObject

+ (id)arrowedAttributedTitleWithTitle:(id)a0;
+ (id)secondaryButtonViewModelWithTitle:(id)a0;
+ (id)primaryButtonViewModelWithTitle:(id)a0;
+ (id)showSeriesTitleViewModel;
+ (id)titleViewModelWithTitle:(id)a0 actionType:(unsigned long long)a1;
+ (id)addButtonViewModel;
+ (id)shareButtonViewModel;
+ (void)p_trackSubscribeShowWithType:(id)a0 isCurrentVIP:(BOOL)a1;
+ (void)p_fetchSubscribeInfoWithDisplayModel:(id)a0 Completion:(id /* block */)a1;
+ (void)configShowSeriesWithDisplayModel:(id)a0;
+ (void)configSourceSchemaWithDisplayModel:(id)a0;
+ (void)configActivitySchemaWithDisplayModel:(id)a0;
+ (void)configGiphyNamePanelWithDisplayModel:(id)a0;
+ (void)configOnlyShareAndAddButtonsWithDisplayModel:(id)a0;
+ (void)configSubscribeEmoticonPanelWithDisplayModel:(id)a0 context:(id)a1;

@end
