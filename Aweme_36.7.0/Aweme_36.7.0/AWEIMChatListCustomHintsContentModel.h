@class NSAttributedString;

@interface AWEIMChatListCustomHintsContentModel : NSObject

@property (copy, nonatomic) NSAttributedString *hintContent;
@property (nonatomic) long long hintType;

- (id)initWithContent:(id)a0 type:(long long)a1;
- (void).cxx_destruct;

@end
