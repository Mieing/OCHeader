@class NSString, NSDictionary;

@interface AWEIMSilverWingRecommendListViewModel : NSObject

@property (readonly, copy, nonatomic) NSString *text;
@property (copy, nonatomic) NSString *emojiText;
@property (nonatomic) long long index;
@property (copy, nonatomic) NSString *sugId;
@property (copy, nonatomic) NSDictionary *ext;
@property (nonatomic) BOOL isCommentReply;
@property (copy, nonatomic) NSString *itemId;
@property (copy, nonatomic) NSString *taskId;
@property (copy, nonatomic) NSString *bizId;
@property (nonatomic) double customTextCornerRadius;
@property (nonatomic) struct UIEdgeInsets { double top; double left; double bottom; double right; } customTextEdgeInsets;

- (void).cxx_destruct;
- (id)initWithTitleText:(id)a0;

@end
