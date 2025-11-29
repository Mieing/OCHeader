@class NSNumber, NSMutableDictionary;

@interface AWEEntertainmentStateModel : MTLModel

@property (copy, nonatomic) NSNumber *currentState;
@property (retain, nonatomic) NSMutableDictionary *textDic;
@property (nonatomic) double timeStamp;

- (void).cxx_destruct;

@end
