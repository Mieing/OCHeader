@class NSString, NSDictionary;

@interface BDTuringPiperCommand : NSObject

@property (nonatomic) long long piperType;
@property (copy, nonatomic) NSString *messageType;
@property (copy, nonatomic) NSString *name;
@property (copy, nonatomic) NSString *callbackID;
@property (copy, nonatomic) NSDictionary *params;
@property (copy, nonatomic) id /* block */ callCompletion;
@property (copy, nonatomic) id /* block */ onHandler;

- (id)toJSONString;
- (void)addCode:(long long)a0 response:(id)a1 type:(id)a2;
- (id)initWithName:(id)a0 onHandler:(id /* block */)a1;
- (void).cxx_destruct;
- (id)initWithDictionary:(id)a0;

@end
