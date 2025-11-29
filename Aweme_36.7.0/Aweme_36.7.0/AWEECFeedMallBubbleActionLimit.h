@interface AWEECFeedMallBubbleActionLimit : NSObject

@property (nonatomic) long long limitMaxCount;
@property (nonatomic) long long limitMaxDate;

+ (id)common;

- (BOOL)canShow;
- (void)clearStoreCount;
- (void)storeHasShow;

@end
