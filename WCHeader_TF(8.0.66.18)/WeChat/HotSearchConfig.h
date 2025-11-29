@class NSString;

@interface HotSearchConfig : NSObject

@property (nonatomic) double clientExpireTime;
@property (copy, nonatomic) NSString *title;
@property (nonatomic) int maxItemCount;
@property (nonatomic) BOOL showSubtitle;

- (void).cxx_destruct;

@end
