@interface DUXPopoverHelper : NSObject

+ (id)contentWithBubbleContent:(id)a0 highlightContent:(id)a1;
+ (id)favoriteHintContent;
+ (id)showDUXPopoverOnView:(id)a0 content:(id)a1 target:(id)a2 position:(unsigned long long)a3 targetPadding:(double)a4 animated:(BOOL)a5 autoDismissTime:(double)a6;
+ (id)showDUXPopoverOnView:(id)a0 content:(id)a1 target:(id)a2 position:(unsigned long long)a3 targetPadding:(double)a4 animated:(BOOL)a5 autoDismissTime:(double)a6 withCover:(BOOL)a7 withClickBlock:(id /* block */)a8;
+ (id)showDUXPopoverOnView:(id)a0 content:(id)a1 target:(id)a2 position:(unsigned long long)a3 targetPadding:(double)a4 animated:(BOOL)a5 autoDismissTime:(double)a6 withCover:(BOOL)a7;

@end
