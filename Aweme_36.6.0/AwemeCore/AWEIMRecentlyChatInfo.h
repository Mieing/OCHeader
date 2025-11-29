@class NSString, NSDate;

@interface AWEIMRecentlyChatInfo : NSObject <AWEIMRecentlyChatInfoService>

@property (copy, nonatomic) NSString *recentlyChatStr;
@property (retain, nonatomic) NSDate *lastMsgCreateTime;
@property (retain, nonatomic) NSDate *cachedTime;
@property (nonatomic) BOOL isRecentlyChat;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
