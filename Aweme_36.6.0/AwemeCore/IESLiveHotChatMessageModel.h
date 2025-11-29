@class NSString, NSMutableArray, HTSLiveText;

@interface IESLiveHotChatMessageModel : NSObject

@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) HTSLiveText *rtfContent;
@property (nonatomic) long long hotChatId;
@property (retain, nonatomic) NSMutableArray *messages;
@property (retain, nonatomic) NSMutableArray *queueComboModels;
@property (retain, nonatomic) NSMutableArray *displayedComboModels;

- (BOOL)mergeHotChatMessage:(id)a0;
- (void)insertComboModel:(id)a0 toCombos:(id)a1;
- (id)initWithHotChatMessage:(id)a0;
- (id)comboModels;
- (void).cxx_destruct;

@end
