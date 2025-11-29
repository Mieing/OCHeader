@interface AWEPIDislikePanelHelper : NSObject

+ (id)placeHolderString;
+ (BOOL)enableKeywordType;
+ (long long)maxLimitCountForInput;
+ (BOOL)isInputViewModel:(id)a0;
+ (BOOL)enableInputViewType;
+ (BOOL)enableVoiceOverType;
+ (id)experimentDic;
+ (BOOL)isContentDimension:(id)a0;
+ (void)updateEntityInfo:(id)a0 extraContent:(id)a1;
+ (id)addInputViewDimension:(id)a0;
+ (id)inputViewDimension;
+ (struct CGSize { double x0; double x1; })itemSize;
+ (struct CGSize { double x0; double x1; })headerSize;
+ (struct CGSize { double x0; double x1; })titleSize;

@end
