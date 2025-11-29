@class NSString;

@interface AWESideBarSubtitleDisplayBaseInfo : NSObject

@property (readonly, copy, nonatomic) NSString *subtitle;
@property (readonly, nonatomic) double consumeTime;
@property (readonly, nonatomic) BOOL hasConsume;

- (id)initWithSubtitle:(id)a0;
- (void).cxx_destruct;
- (void)consume;

@end
