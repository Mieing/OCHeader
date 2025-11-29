@class NSData, BaseResponse;

@interface TransTextToSpeechResponse : WXPBGeneratedMessage

@property (retain, nonatomic) BaseResponse *baseResponse;
@property (retain, nonatomic) NSData *speech;
@property (nonatomic) unsigned int format;
@property (nonatomic) unsigned int textPosition;
@property (nonatomic) BOOL hasUnknowCharacter;

+ (void)initialize;

@end
