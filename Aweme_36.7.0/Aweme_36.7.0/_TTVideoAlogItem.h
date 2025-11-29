@class NSString;

@interface _TTVideoAlogItem : NSObject

@property (nonatomic) long long level;
@property (copy, nonatomic) NSString *source;
@property (copy, nonatomic) NSString *log;

+ (id)log:(id)a0 level:(long long)a1 source:(id)a2;

- (void).cxx_destruct;

@end
