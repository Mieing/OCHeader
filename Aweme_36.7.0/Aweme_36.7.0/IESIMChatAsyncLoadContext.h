@class NSArray, NSString;

@interface IESIMChatAsyncLoadContext : NSObject <IESIMMessageTabAsyncLoadContext>

@property (copy, nonatomic) NSArray *chatList;
@property (nonatomic) BOOL isSnapshot;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (void).cxx_destruct;

@end
