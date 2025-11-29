@class NSString, NSArray, NSDictionary, NSNumber;

@interface BDDataBuilderOperationInfo : NSObject

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) id firstArg;
@property (retain, nonatomic) id secondArg;
@property (readonly, nonatomic) BOOL firstArgToBool;
@property (readonly, nonatomic) long long firstArgToInt;
@property (readonly, nonatomic) double firstArgToFloat;
@property (readonly, nonatomic) NSNumber *firstArgToNumber;
@property (readonly, copy, nonatomic) NSString *firstArgToStr;
@property (readonly, copy, nonatomic) NSArray *firstArgToArr;
@property (readonly, copy, nonatomic) NSDictionary *firstArgToDict;
@property (readonly, nonatomic) BOOL secondArgToBool;
@property (readonly, nonatomic) long long secondArgToInt;
@property (readonly, nonatomic) double secondArgToFloat;
@property (readonly, nonatomic) NSNumber *secondArgToNumber;
@property (readonly, copy, nonatomic) NSString *secondArgToStr;
@property (readonly, copy, nonatomic) NSArray *secondArgToArr;
@property (readonly, copy, nonatomic) NSDictionary *secondArgToDict;

+ (id)createWithType:(unsigned long long)a0 firstArg:(id)a1;
+ (id)createWithType:(unsigned long long)a0;
+ (id)createWithType:(unsigned long long)a0 firstArg:(id)a1 secondArg:(id)a2;

- (id)initWithType:(unsigned long long)a0 firstArg:(id)a1 secondArg:(id)a2;
- (void).cxx_destruct;

@end
