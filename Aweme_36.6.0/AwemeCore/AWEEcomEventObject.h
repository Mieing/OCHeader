@class NSString, NSMutableDictionary;

@interface AWEEcomEventObject : NSObject

@property (retain, nonatomic) NSMutableDictionary *params;
@property (copy, nonatomic) NSString *event;
@property (copy, nonatomic) id /* block */ enterFrom;
@property (copy, nonatomic) id /* block */ enterFromSecond;
@property (copy, nonatomic) id /* block */ mergeDict;
@property (copy, nonatomic) id /* block */ addKeyPair;
@property (copy, nonatomic) id /* block */ send;

- (id)initWithEvent:(id)a0;
- (void).cxx_destruct;

@end
