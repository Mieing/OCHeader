@class NSString, LSIMMessageRichTextAction;

@interface LSIMMessageRichTextItem : NSObject

@property (copy, nonatomic) NSString *text;
@property (retain, nonatomic) LSIMMessageRichTextAction *action;
@property (retain, nonatomic) LSIMMessageRichTextAction *defaultAction;

+ (id)modelCustomPropertyMapper;

- (void).cxx_destruct;

@end
