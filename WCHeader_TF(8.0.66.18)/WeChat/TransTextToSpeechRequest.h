@class NSString;

@interface TransTextToSpeechRequest : WXPBGeneratedMessage

@property (retain, nonatomic) NSString *text;
@property (retain, nonatomic) NSString *textUserName;
@property (nonatomic) int sex;
@property (nonatomic) int modelType;
@property (nonatomic) float speed;

+ (void)initialize;

@end
