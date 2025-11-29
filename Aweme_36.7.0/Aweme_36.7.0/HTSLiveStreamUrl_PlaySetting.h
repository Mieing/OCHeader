@class NSString;

@interface HTSLiveStreamUrl_PlaySetting : IESLivePBBaseMessage

@property (copy, nonatomic) NSString *horizontal;
@property (copy, nonatomic) NSString *vertical;

+ (id)descriptor;

- (id)vertical;
- (id)horizontal;
- (void)setVertical:(id)a0;
- (void)setHorizontal:(id)a0;
- (id)aweLivePlayeSetting;

@end
