@interface BDTGDataUtils : NSObject

+ (void)encloseData:(id)a0 byTag:(unsigned char)a1;
+ (void)appendDERLength:(unsigned long long)a0 toData:(id)a1;
+ (void)appendUTF8String:(id)a0 toData:(id)a1;
+ (void)encloseBySequenceTag:(id)a0;
+ (void)encloseBySetTag:(id)a0;
+ (void)prependByte:(unsigned char)a0 toData:(id)a1;
+ (void)appendBITString:(id)a0 toData:(id)a1;
+ (void)appendSubjectItem:(unsigned char[5])a0 value:(id)a1 toData:(id)a2;

@end
