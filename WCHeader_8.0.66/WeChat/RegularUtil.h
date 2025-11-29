@interface RegularUtil : NSObject

+ (BOOL)isUsrNameSX:(id)a0;
+ (BOOL)isLegalEmail:(id)a0;
+ (BOOL)isLegalQQNum:(id)a0;
+ (id)getPhoneText:(id)a0;
+ (id)parseURLParams:(id)a0;
+ (id)parseURLParams:(id)a0 bDecodeValue:(BOOL)a1;
+ (id)decodedParamOfUrl:(id)a0;

@end
