@class NSString;

@interface ACCCameraMeasureCostInfo : NSObject <ACCCameraMeasureCostInfo>

@property (copy, nonatomic) NSString *className;
@property (nonatomic) double costTime;
@property (nonatomic) SEL selector;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (id)costWithObj:(id)a0 sel:(SEL)a1 time:(double)a2;

- (void).cxx_destruct;

@end
