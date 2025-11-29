@class NSDictionary, NSString;
@protocol PTYTaskDataDelegate;

@interface PTYTaskData : NSObject <IESLiveTaskData, BDPClientAITaskData>

@property (copy, nonatomic) NSDictionary *params;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSDictionary *params;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;
@property (copy, nonatomic) NSDictionary *params;
@property (weak, nonatomic) id<PTYTaskDataDelegate> delegate;

- (void).cxx_destruct;
- (id)init;

@end
