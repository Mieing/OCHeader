@class NSDictionary;

@interface SendMessageToQQResp : QQBaseResp

@property (copy, nonatomic) NSDictionary *otherInfo;

+ (id)respWithResult:(id)a0 errorDescription:(id)a1 extendInfo:(id)a2;
+ (id)respWithResult:(id)a0 errorDescription:(id)a1 extendInfo:(id)a2 otherInfo:(id)a3;

- (void).cxx_destruct;

@end
