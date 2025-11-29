@class NSDictionary, NSString;

@interface IESLiveMultiTargetModel : NSObject

@property (retain, nonatomic) NSDictionary *originData;
@property (retain, nonatomic) NSString *target;
@property (retain, nonatomic) id targetValue;
@property (nonatomic) BOOL isDouyinPaas;

+ (id)modelWithConfig:(id)a0;

- (BOOL)isSaas;
- (void).cxx_destruct;
- (id)currentValue;

@end
