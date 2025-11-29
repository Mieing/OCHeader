@interface FaceRecogFlashUtil : NSObject

+ (id)insertVerifyDataToImage:(id)a0 lipReadingData:(id)a1 bioId:(id)a2;
+ (id)encryptData:(id)a0 withKey:(id)a1;
+ (id)decryptData:(id)a0 withKey:(id)a1;
+ (long long)convertToYtAction:(unsigned long long)a0;
+ (id)addBlurEffectToImage:(id)a0;
+ (id)addBlurEffectToImage:(id)a0 withEdgeClamp:(BOOL)a1;

@end
