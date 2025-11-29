@class NSString, NSMutableDictionary, NSMutableSet, ChatroomMsgTpl;

@interface GCContentModel : NSObject

@property (retain, nonatomic) NSString *contentStr;
@property (nonatomic) BOOL supportLink;
@property (retain, nonatomic) NSMutableDictionary *linkJumpInfoDict;
@property (retain, nonatomic) NSString *sysTitleStr;
@property (retain, nonatomic) ChatroomMsgTpl *chatroomMsgTpl;
@property (retain, nonatomic) NSMutableSet *userNameSet;
@property (retain, nonatomic) NSMutableDictionary *userNameDict;
@property (readonly, nonatomic) NSString *textThatCanCopy;
@property (nonatomic) BOOL isPureText;

- (void).cxx_destruct;

@end
