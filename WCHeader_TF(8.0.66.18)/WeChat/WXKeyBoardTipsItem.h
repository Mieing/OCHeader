@class NSString, NSDictionary;

@interface WXKeyBoardTipsItem : NSObject

@property (readonly, nonatomic) unsigned int scene;
@property (readonly, nonatomic) NSString *tips;
@property (readonly, nonatomic) NSDictionary *jumpPluginInfo;

- (BOOL)canShow;
- (void)onShow;
- (void)onClick;
- (id)getTipsWithExpt:(id)a0 defaultValue:(id)a1;
- (id)getTipsWithConfig:(id)a0 defaultValue:(id)a1;

@end
