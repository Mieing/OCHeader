@class NSString, IESECLogScene, NSMutableDictionary;

@interface IESECLogExtraMaker : NSObject {
    NSMutableDictionary *_extraDict;
}

@property (retain, nonatomic) NSString *moduleName;
@property (nonatomic) long long eventStatus;
@property (retain, nonatomic) IESECLogScene *context;

- (void).cxx_destruct;
- (void)setValue:(id)a0 forKey:(id)a1;

@end
