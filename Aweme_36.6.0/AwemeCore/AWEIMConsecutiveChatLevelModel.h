@class NSString;

@interface AWEIMConsecutiveChatLevelModel : NSObject

@property (copy, nonatomic) NSString *levelStr;
@property (copy, nonatomic) NSString *dateStr;

+ (id)preferredLevelStringWithCon:(id)a0;

- (id)initWithLevelStr:(id)a0 dateStr:(id)a1;
- (id)initWithInfoStr:(id)a0;
- (void).cxx_destruct;

@end
