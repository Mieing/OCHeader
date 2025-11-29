@class NSDictionary;

@interface AWEGrouponBubbleTrackModel : NSObject

@property (nonatomic) BOOL hasTracked;
@property (nonatomic) long long bubbleType;
@property (nonatomic) long long showTimestamp;
@property (nonatomic) long long clickTimestamp;
@property (copy, nonatomic) NSDictionary *extraParams;
@property (nonatomic) long long pageType;

- (id)initWithType:(long long)a0 pageType:(long long)a1 extraParams:(id)a2;
- (void)trackParamsWithClickType:(unsigned long long)a0;
- (void).cxx_destruct;

@end
