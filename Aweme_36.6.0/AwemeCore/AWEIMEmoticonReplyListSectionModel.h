@class AWEIMMessageEmoticonReplyViewModel, NSArray, AWEIMMessage;

@interface AWEIMEmoticonReplyListSectionModel : NSObject

@property (retain, nonatomic) AWEIMMessageEmoticonReplyViewModel *replyViewModel;
@property (copy, nonatomic) NSArray *sectionArray;
@property (retain, nonatomic) AWEIMMessage *message;
@property (nonatomic) BOOL selected;

- (void).cxx_destruct;

@end
