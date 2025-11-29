@class NSString, NSArray, NSNumber;

@interface IESECYataFreqLocalStore : MTLModel <MTLJSONSerializing>

@property (copy, nonatomic) NSString *status;
@property (copy, nonatomic) NSArray *view;
@property (copy, nonatomic) NSArray *click;
@property (copy, nonatomic) NSArray *close;
@property (retain, nonatomic) NSNumber *unfrozenDate;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)JSONKeyPathsByPropertyKey;

- (id)addTimestampToArray:(id)a0 dates:(id)a1 limit:(long long)a2;
- (struct _NSRange { unsigned long long x0; unsigned long long x1; })getValidRangeWithArray:(id)a0 range:(struct _NSRange { unsigned long long x0; unsigned long long x1; })a1;
- (void)actionWithType:(long long)a0 dates:(id)a1 limit:(long long)a2;
- (id)arrayWithType:(long long)a0;
- (void).cxx_destruct;
- (id)init;
- (void)cleanData;

@end
