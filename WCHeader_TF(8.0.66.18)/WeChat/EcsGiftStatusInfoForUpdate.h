@class NSString, NSNumber;

@interface EcsGiftStatusInfoForUpdate : NSObject

@property (copy, nonatomic) NSString *statusWording;
@property (retain, nonatomic) NSNumber *statusStyle;
@property (retain, nonatomic) NSNumber *statusVersion;
@property (retain, nonatomic) NSNumber *status;
@property (copy, nonatomic) NSString *detailStatusWording;

+ (id)makeWithStatusWording:(id)a0 statusStyle:(id)a1 statusVersion:(id)a2 status:(id)a3 detailStatusWording:(id)a4;
+ (id)fromList:(id)a0;
+ (id)nullableFromList:(id)a0;

- (id)toList;
- (void).cxx_destruct;

@end
