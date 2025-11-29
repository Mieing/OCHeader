@class NSString;

@interface LSIMMessageSystemCellVM : LSIMChatDetailBaseCellVM

@property (readonly, copy, nonatomic) NSString *systemText;
@property (copy, nonatomic) NSString *customHintMessage;

- (void).cxx_destruct;
- (BOOL)isSystemMessage;

@end
