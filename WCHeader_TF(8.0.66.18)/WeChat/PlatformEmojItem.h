@class NSString, PlatformEmojSize;

@interface PlatformEmojItem : NSObject

@property (nonatomic) long long type;
@property (copy, nonatomic) NSString *originPath;
@property (copy, nonatomic) NSString *thumbPath;
@property (retain, nonatomic) PlatformEmojSize *thumbSize;
@property (retain, nonatomic) PlatformEmojSize *originSize;
@property (copy, nonatomic) NSString *mediaId;
@property (nonatomic) long long durationMs;

+ (id)makeWithType:(long long)a0 originPath:(id)a1 thumbPath:(id)a2 thumbSize:(id)a3 originSize:(id)a4 mediaId:(id)a5 durationMs:(long long)a6;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
