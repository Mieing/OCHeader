@class NSString, NSDictionary;

@interface IESECLiveSliceViewEvent : NSObject

@property (nonatomic) unsigned long long type;
@property (copy, nonatomic) NSString *typeName;
@property (copy, nonatomic) NSDictionary *params;

+ (id)eventFromDictionary:(id)a0;
+ (id)eventArrayFromDictionaryArray:(id)a0;
+ (id)eventArrayFromGroupEvent:(id)a0;

- (id)initWithTypeName:(id)a0 params:(id)a1;
- (unsigned long long)getTypeByTypeName:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
