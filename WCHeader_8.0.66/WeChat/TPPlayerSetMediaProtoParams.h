@class FlutterStandardTypedData;

@interface TPPlayerSetMediaProtoParams : NSObject

@property (nonatomic) long long playerId;
@property (nonatomic) long long mediaType;
@property (retain, nonatomic) FlutterStandardTypedData *mediaProto;
@property (nonatomic) long long startPlayPosition;

+ (id)makeWithPlayerId:(long long)a0 mediaType:(long long)a1 mediaProto:(id)a2 startPlayPosition:(long long)a3;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
