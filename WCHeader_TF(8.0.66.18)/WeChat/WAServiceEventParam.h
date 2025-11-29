@class NSString, NSObject;

@interface WAServiceEventParam : NSObject

@property (retain, nonatomic) NSString *eventName;
@property (retain, nonatomic) NSObject *eventParam;
@property (nonatomic) unsigned int srcWebviewID;
@property (nonatomic) unsigned int dstWebviewID;
@property (nonatomic) BOOL afterThreadInject;
@property (nonatomic) BOOL notAsyncIfPossibleForGameApp;
@property (nonatomic) BOOL permissionCheck;
@property (nonatomic) BOOL isThirdAppEvent;

- (id)init;
- (void).cxx_destruct;

@end
