@class NSString, FlutterStandardTypedData;

@interface MegaVideoFeedInfo : NSObject

@property (copy, nonatomic) NSString *feedId;
@property (copy, nonatomic) NSString *nonceId;
@property (retain, nonatomic) FlutterStandardTypedData *finderObjectData;

+ (id)makeWithFeedId:(id)a0 nonceId:(id)a1 finderObjectData:(id)a2;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
