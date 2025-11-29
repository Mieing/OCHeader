@class NSString, NSArray, NSMutableSet, NSDictionary;

@interface HMDProtectCapture : NSObject

@property (retain, nonatomic) NSString *exception;
@property (retain, nonatomic) NSString *reason;
@property (nonatomic) long long protectType;
@property (retain, nonatomic) NSString *protectTypeString;
@property (retain, nonatomic) NSArray *backtraces;
@property (retain, nonatomic) NSString *log;
@property (retain, nonatomic) id crashKey;
@property (retain, nonatomic) NSMutableSet *crashKeySet;
@property (retain, nonatomic) NSArray *crashKeyList;
@property (nonatomic) BOOL filterWithTopStack;
@property (retain, nonatomic) NSDictionary *customDictionary;
@property (retain, nonatomic) NSDictionary *customFilter;

+ (id)captureException:(id)a0 reason:(id)a1 crashKey:(id)a2;
+ (id)captureWithNSException:(id)a0 crashKey:(id)a1;
+ (id)captureException:(id)a0 reason:(id)a1;
+ (id)captureWithNSException:(id)a0;

- (id)initWithException:(id)a0 reason:(id)a1 crashKey:(id)a2;
- (void).cxx_destruct;

@end
