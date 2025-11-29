@class NSString, NSData;

@interface CommonReddotSyncRequest : WXPBGeneratedMessage

@property (nonatomic) int scene;
@property (nonatomic) int bizScene;
@property (retain, nonatomic) NSString *reliableNotifyBuffer;
@property (retain, nonatomic) NSString *lastBuffer;
@property (retain, nonatomic) NSString *keyBuffer;
@property (retain, nonatomic) NSData *bizCustomInfoBuffer;

+ (void)initialize;

- (void)setBizCustomInfoBuffer:(id)a0;
- (id)bizCustomInfoBuffer;
- (void)setKeyBuffer:(id)a0;
- (id)keyBuffer;
- (void)setLastBuffer:(id)a0;
- (id)lastBuffer;
- (void)setReliableNotifyBuffer:(id)a0;
- (id)reliableNotifyBuffer;
- (void)setBizScene:(int)a0;
- (int)bizScene;
- (void)setScene:(int)a0;
- (int)scene;

@end
