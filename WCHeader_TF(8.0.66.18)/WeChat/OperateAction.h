@class NSString;

@interface OperateAction : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *cardId;
@property (retain, nonatomic) NSString *codeId;
@property (nonatomic) unsigned int operateTimestamp;
@property (nonatomic) unsigned int operateType;

+ (void)initialize;

@end
