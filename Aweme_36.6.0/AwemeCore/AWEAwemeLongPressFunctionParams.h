@class NSString, NSDictionary, AWEAwemeModel;

@interface AWEAwemeLongPressFunctionParams : NSObject <AWEAwemeLongPressFunctionParamsProtocol>

@property (nonatomic) long long modelType;
@property (retain, nonatomic) AWEAwemeModel *awemeModel;
@property (copy, nonatomic) NSString *referString;
@property (copy, nonatomic) NSString *enterFrom;
@property (copy, nonatomic) NSDictionary *extraLogDict;
@property (copy, nonatomic) NSDictionary *customParams;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)makeWithModelType:(long long)a0 awemeModel:(id)a1 referString:(id)a2 extraLog:(id)a3 customParams:(id)a4 enterFrom:(id)a5 actionBlock:(id /* block */)a6;
+ (id)makeWithModelType:(long long)a0 awemeModel:(id)a1 referString:(id)a2 extraLog:(id)a3 customParams:(id)a4 actionBlock:(id /* block */)a5;

- (void).cxx_destruct;

@end
