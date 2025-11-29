@class NSString, NSMutableArray, NSObject;

@interface IESLLLiveMessageCenterData : NSObject

@property (copy, nonatomic) NSString *dataName;
@property (retain, nonatomic) NSObject *data;
@property (nonatomic) BOOL isAppLifeCycle;
@property (retain, nonatomic) NSMutableArray *subscribers;

- (void)removeListener:(id)a0;
- (void).cxx_destruct;
- (id)init;
- (void)addListener:(id)a0;

@end
