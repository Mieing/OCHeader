@class NSString, NSMutableArray;
@protocol IESLiveIMFilter, IESLiveUserService;

@interface HTSLiveMessageFakedFilter : NSObject <IESLiveIMFilter>

@property (readonly, weak, nonatomic) id<IESLiveUserService> userService;
@property (retain, nonatomic) NSMutableArray *fakeMessageAllowList;
@property (nonatomic) int maxMessageCount;
@property (retain, nonatomic) id<IESLiveIMFilter> nextFilter;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

@end
