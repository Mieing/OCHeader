@interface CJPayCommonUtil : NSObject

+ (id)dictionaryToJson:(id)a0;
+ (double)mm2pt:(double)a0;
+ (double)getSystemUpTime;
+ (id)appendParamsToUrl:(id)a0 params:(id)a1;
+ (id)jsonStringToDictionary:(id)a0;
+ (id)arrayToJson:(id)a0;
+ (id)replaceNoEncoding:(id)a0;
+ (id)cj_base64:(id)a0;
+ (id)parseScheme:(id)a0;
+ (void)cj_catransactionAction:(id /* block */)a0 completion:(id /* block */)a1;
+ (id)dictionaryFromJsonObject:(id)a0;
+ (id)dateStringFromTimeStamp:(double)a0 dateFormat:(id)a1;
+ (id)createMD5With:(id)a0;
+ (id)dictionarySign:(id)a0;
+ (double)currDevicePPI;
+ (id)cj_decodeBase64:(id)a0;
+ (id)jsonToArray:(id)a0;
+ (id)generateScheme:(id)a0;
+ (id)getMMSSFromSS:(int)a0;
+ (id)getMoneyFormatStringFromDouble:(double)a0 formatString:(id)a1;
+ (id)replcaeAutoEncoding:(id)a0;
+ (id)snapViewToImageView:(id)a0;
+ (double)pt2mm:(double)a0;
+ (BOOL)isDictionarySizeOverThreshold:(id)a0 threshold:(double)a1;
+ (double)calExecutionTime:(id /* block */)a0;
+ (id)internetDateTimeFormatter;
+ (id)dateFromRFC822String:(id)a0;

@end
