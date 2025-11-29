@class NSMutableDictionary;

@interface AWESearchPassParamsManager : NSObject

@property (retain, nonatomic) NSMutableDictionary *passOnceParamsMap;
@property (retain, nonatomic) NSMutableDictionary *passWithFilterParamsMap;
@property (retain, nonatomic) NSMutableDictionary *passAllTimeParamsMap;

+ (id)mergeMainParamsStruct:(id)a0 partParamsStruct:(id)a1;
+ (id)mergeMainParamsStructArray:(id)a0 partParamsStructArray:(id)a1;

- (void)updateWithRawData:(id)a0 isGroupBuySelf:(BOOL)a1;
- (id)getOnceParamsWithTabKey:(id)a0;
- (id)getPassWithFilterParamsWithTabKey:(id)a0;
- (id)getPassAllTimeParamsWithTabKey:(id)a0;
- (void)removeOnceParamsWithTabKey:(id)a0;
- (void)removePassWithFilterParamsWithTabKey:(id)a0;
- (void)removePassAllTimeParamsWithTabKey:(id)a0;
- (void).cxx_destruct;
- (id)init;

@end
