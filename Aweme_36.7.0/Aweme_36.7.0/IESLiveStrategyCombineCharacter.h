@class NSString;
@protocol Operator;

@interface IESLiveStrategyCombineCharacter : NSObject {
    double _lastUpdateTime;
    id<Operator> _opImp;
}

@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, copy, nonatomic) NSString *type;
@property (readonly, copy, nonatomic) NSString *op;
@property (readonly, copy, nonatomic) NSString *alias;
@property (readonly, nonatomic) long long checkInterval;
@property (readonly, nonatomic) unsigned long long dataType;
@property (readonly, nonatomic) id value;
@property (retain, nonatomic) id inputValue;

- (BOOL)updateCharacterValue:(id)a0 withAnchorId:(id)a1 ts:(double)a2;
- (id)opImp;
- (id)getValidCharacterValue:(id)a0;
- (void).cxx_destruct;
- (id)initWithInfo:(id)a0;

@end
