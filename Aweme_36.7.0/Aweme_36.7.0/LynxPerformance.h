@class NSDictionary;

@interface LynxPerformance : NSObject {
    NSDictionary *_dic;
}

@property (readonly, nonatomic) BOOL hasActualFMP;
@property (readonly, nonatomic) double actualFMPDuration;
@property (readonly, nonatomic) double actualFirstScreenEndTimeStamp;

+ (id)toPerfKey:(int)a0 isSsrHydrate:(BOOL)a1;
+ (id)toPerfKey:(int)a0;
+ (id)toPerfStampKey:(int)a0;

- (id)initWithPerformance:(id)a0 url:(id)a1 pageType:(id)a2 reactVersion:(id)a3;
- (void).cxx_destruct;
- (id)toDictionary;

@end
