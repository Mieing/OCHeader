@class NSString;
@protocol AWEPassportColor;

@interface AWEPassportColor : NSObject <AWEPassportColor>

@property (retain, nonatomic) id<AWEPassportColor> implementation;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

+ (void)setupImplementation:(id)a0;
+ (id)standardColorS4;
+ (id)standardColorS1;
+ (id)standardColorS12;
+ (id)standardColorS11;
+ (id)standardColorS22;
+ (id)standardColorS14;
+ (id)standardColorS3;
+ (id)standardColorS2;
+ (id)standardColorS1_D;
+ (id)standardColorS10;
+ (id)standardColorS10_D;
+ (id)standardColorS11_D;
+ (id)standardColorS12_D;
+ (id)standardColorS13;
+ (id)standardColorS13_D;
+ (id)standardColorS20;
+ (id)standardColorS21;
+ (id)standardColorS30;
+ (id)standardColorS5;
+ (id)standardColorS64;
+ (id)wrapperColor_T5_M2;
+ (id)wrapperColor_T13_M14;
+ (id)sharedInstance;

- (void).cxx_destruct;

@end
