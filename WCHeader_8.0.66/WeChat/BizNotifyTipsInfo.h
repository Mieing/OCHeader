@class NSNumber, NSString;

@interface BizNotifyTipsInfo : NSObject

@property (retain, nonatomic) NSNumber *msgCount;
@property (retain, nonatomic) NSNumber *msgId;
@property (copy, nonatomic) NSString *userName;
@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) NSNumber *isBizContact;
@property (copy, nonatomic) NSString *coverUrl;
@property (retain, nonatomic) NSNumber *forceRoundHeader;

+ (id)makeWithMsgCount:(id)a0 msgId:(id)a1 userName:(id)a2 content:(id)a3 isBizContact:(id)a4 coverUrl:(id)a5 forceRoundHeader:(id)a6;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
