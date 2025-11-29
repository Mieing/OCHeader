@class NSDictionary;
@protocol TIMXObjectDeallocedNotifierDelegate;

@interface TIMXObjectDeallocedNotifier : NSObject

@property (weak, nonatomic) id<TIMXObjectDeallocedNotifierDelegate> delegate;
@property (copy, nonatomic) NSDictionary *userInfo;

- (void).cxx_destruct;
- (void)dealloc;

@end
