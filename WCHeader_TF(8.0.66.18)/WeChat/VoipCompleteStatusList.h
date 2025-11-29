@class NSMutableArray;

@interface VoipCompleteStatusList : WXPBGeneratedMessage

@property (nonatomic) int count;
@property (retain, nonatomic) NSMutableArray *completeStatus;
@property (nonatomic) unsigned int seq;

+ (void)initialize;

@end
