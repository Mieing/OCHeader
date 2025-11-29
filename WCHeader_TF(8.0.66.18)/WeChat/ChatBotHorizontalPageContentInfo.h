@class NSString, UIView;

@interface ChatBotHorizontalPageContentInfo : NSObject

@property (copy, nonatomic) NSString *labelName;
@property (retain, nonatomic) UIView *pageContentView;

+ (id)createPageInfoWithLabelName:(id)a0 pageContentView:(id)a1;

- (void).cxx_destruct;

@end
