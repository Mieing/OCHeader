@class YYTextLayout, AWEIMMessagePropertyItemGroup;

@interface AWEIMMessageEmoticonReplyViewModel : AWEIMMessageEmoticonReplyBaseViewModel

@property (nonatomic) unsigned long long vmType;
@property (retain, nonatomic) AWEIMMessagePropertyItemGroup *itemGroup;
@property (copy, nonatomic) YYTextLayout *titleLayout;
@property (nonatomic) struct CGSize { double width; double height; } titleSize;
@property (copy, nonatomic) id /* block */ userCallback;
@property (copy, nonatomic) id /* block */ moreCallback;

- (void).cxx_destruct;

@end
