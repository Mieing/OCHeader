@class NSNumber, FlutterStandardTypedData, NSString;

@interface LiveHybridOpenNativeLiveRoom : NSObject

@property (retain, nonatomic) FlutterStandardTypedData *feedPBData;
@property (retain, nonatomic) NSNumber *itemIndex;
@property (copy, nonatomic) NSString *chnlExtra;

+ (id)makeWithFeedPBData:(id)a0 itemIndex:(id)a1 chnlExtra:(id)a2;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
