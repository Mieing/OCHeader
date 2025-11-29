@class NSMutableArray;

@interface AWEFeedEcomQueryCardTriggerPlayConfig : NSObject

@property (retain, nonatomic) NSMutableArray *metas;

+ (id)configWithParams:(id)a0;

- (id)containPicProgress:(long long)a0 params:(id)a1;
- (id)containVideoProgress:(long long)a0 params:(id)a1;
- (void).cxx_destruct;

@end
