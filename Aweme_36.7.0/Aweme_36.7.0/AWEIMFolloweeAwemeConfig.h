@class NSString;

@interface AWEIMFolloweeAwemeConfig : NSObject <AWEIMFolloweeAwemeConfigInterface>

@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (long long)tipStrategy;
+ (BOOL)needShowAwemeTag;
+ (int)awemeVideoCheckIntervalDay;
+ (id)sharedInstance;

- (BOOL)needShowAwemeTip;
- (BOOL)needShowPlayIcon;

@end
