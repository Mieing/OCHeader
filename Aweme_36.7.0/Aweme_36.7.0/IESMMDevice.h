@interface IESMMDevice : NSObject

+ (BOOL)isiOS10orHigher;
+ (BOOL)isiOS12orHigher;
+ (BOOL)isiOS14orHigher;
+ (BOOL)isiPhone6sp7p8p;
+ (BOOL)supportMetalCNN;
+ (BOOL)isiOS10;
+ (BOOL)isiOS11;
+ (BOOL)isiOS13orHigher;
+ (BOOL)isiOS15orHigher;
+ (long long)getTotalSysMemory;
+ (BOOL)isPoorthaniPhone11;
+ (BOOL)isPoorthaniPhone12;
+ (BOOL)isPoorthaniPhone4s;
+ (BOOL)isPoorthaniPhone5;
+ (BOOL)isPoorthaniPhone5s;
+ (BOOL)isPoorthaniPhone6;
+ (BOOL)isPoorthaniPhone6s;
+ (BOOL)isPoorthaniPhone7;
+ (BOOL)isPoorthaniPhone8;
+ (BOOL)isPoorthaniPhoneX;
+ (BOOL)isPoorthaniPhoneXSXR;
+ (BOOL)isiOS11_3;
+ (BOOL)isiOS11_4;
+ (BOOL)isiOS14_2_1;
+ (BOOL)isiOS14_2orHigher;
+ (BOOL)isiOS14_4;
+ (BOOL)isiOS14_5orHigher;
+ (BOOL)isiOS7orHigher;
+ (BOOL)isiOS8orHigher;
+ (BOOL)isiOS9orHigher;
+ (BOOL)isiPhone12ProMax;
+ (BOOL)isiPhone12mini;
+ (BOOL)isiPhone5;
+ (BOOL)isiPhone66s78;
+ (BOOL)isiPhone6p;
+ (BOOL)isiPhoneSE;
+ (id)machineModel;
+ (struct CGSize { double x0; double x1; })screenSize;
+ (BOOL)isiPad;
+ (BOOL)isiPhone;
+ (id)systemVersion;

@end
