@class UILabel, NSString;

@interface AWEHotSpotLynxStrokeLabel : LynxUI

@property (retain, nonatomic) UILabel *label;
@property (readonly, copy, nonatomic) NSString *text;
@property (readonly, nonatomic) long long rank;

+ (void)registerStrokeLabel;
+ (id)__lynx_prop_config__660;
+ (id)__lynx_prop_config__731;

- (void)setText:(id)a0 requestReset:(BOOL)a1;
- (void)updateTextLabelWithRank:(long long)a0 text:(id)a1 containerLabel:(id)a2;
- (void)setRank:(long long)a0 requestReset:(BOOL)a1;
- (void).cxx_destruct;
- (id)createView;

@end
