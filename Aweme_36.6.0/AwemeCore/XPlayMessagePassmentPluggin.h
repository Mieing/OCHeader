@class NSString;
@protocol XPlayItemPrivateProtocol, XPlayItemProtocol;

@interface XPlayMessagePassmentPluggin : NSObject <XPlayMessagePlugginProtocol>

@property (weak, nonatomic) id<XPlayItemProtocol, XPlayItemPrivateProtocol> item;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void)handleMessageContent:(id)a0;
- (void).cxx_destruct;

@end
