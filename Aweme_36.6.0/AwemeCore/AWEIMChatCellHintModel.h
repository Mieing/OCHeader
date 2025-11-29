@class AWEIMChatCellHintTypeConfigModel, AWEIMChatCellHighlightHintConfig, NSObject, NSAttributedString;
@protocol OS_dispatch_semaphore;

@interface AWEIMChatCellHintModel : NSObject

@property (nonatomic) unsigned long long hintType;
@property (retain, nonatomic) AWEIMChatCellHintTypeConfigModel *hintTypeConfig;
@property (retain, nonatomic) NSObject<OS_dispatch_semaphore> *lock;
@property (copy, nonatomic) NSAttributedString *content;
@property (retain, nonatomic) NSAttributedString *rawAttributedStringBeforeMatchEmoji;
@property (readonly, nonatomic) AWEIMChatCellHighlightHintConfig *highlightHintConfig;

- (void)dealloc;
- (id)initWithHintType:(unsigned long long)a0 hitContent:(id)a1;
- (id)initWithHintType:(unsigned long long)a0 content:(id)a1;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;

@end
