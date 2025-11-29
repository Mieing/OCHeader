@interface AWELucyLiveIMMessageActionCreator : IESLiveIMBaseActionCreator

@property (nonatomic) long long referenceCount;

- (void)setupWithMessageConfig:(id)a0;
- (void)setupWithRoomID:(id)a0;

@end
