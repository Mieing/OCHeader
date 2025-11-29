@class NSString;

@interface GameChatExpireRecord : NSObject

@property (retain, nonatomic) NSString *recordValue;
@property (retain, nonatomic) NSString *recordKey;
@property (nonatomic) double recordTime;
@property (nonatomic) double maxAge;

+ (id)modelFromJsonStr:(id)a0;

- (id)modelJsonStr;
- (void).cxx_destruct;

@end
