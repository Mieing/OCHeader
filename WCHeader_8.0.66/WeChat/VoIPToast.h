@class NSString;

@interface VoIPToast : NSObject

@property (retain, nonatomic) NSString *string;
@property (nonatomic) double remainTime;
@property (nonatomic) unsigned long long type;
@property (nonatomic) BOOL hasShowedBefore;
@property (nonatomic) unsigned long long startTime;
@property (nonatomic) BOOL isDiff;

+ (id)constructVoIPToast:(id)a0 delta:(double)a1 type:(unsigned long long)a2 isDiff:(BOOL)a3;
+ (id)constructVoIPToast:(id)a0 delta:(double)a1 type:(unsigned long long)a2;

- (void).cxx_destruct;

@end
