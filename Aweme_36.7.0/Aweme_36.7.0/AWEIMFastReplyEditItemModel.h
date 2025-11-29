@class NSString;

@interface AWEIMFastReplyEditItemModel : NSObject

@property (copy, nonatomic) NSString *replyText;
@property (copy, nonatomic) NSString *textFieldPlaceholder;
@property (nonatomic) BOOL isAddItemStyle;
@property (nonatomic) BOOL isEdited;

- (void).cxx_destruct;
- (id)initWithText:(id)a0;

@end
