@class NSString, NSMutableDictionary;

@interface MMBifrostTrack : NSObject

@property (retain, nonatomic) NSMutableDictionary *sourceToTargetsDict;
@property (copy, nonatomic) NSString *protocolName;
@property (copy, nonatomic) NSString *selectorName;
@property (copy, nonatomic) id /* block */ clearCallback;

- (id)init;
- (id)initWithProtocolName:(id)a0 selectorName:(id)a1;
- (void)cacheTargets:(id)a0 forSource:(id)a1;
- (id)cacheTargetsForSource:(id)a0;
- (void).cxx_destruct;

@end
