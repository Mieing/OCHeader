@interface TTAdSplashSocketUtil : NSObject {
    int gen_times;
}

+ (unsigned int)cryptographicallySecurePseudoRandomNumber;
+ (id)bytesFromUInt32:(unsigned int)a0;
+ (id)bytesFromUInt8:(unsigned char)a0;
+ (id)bytesFromUInt64:(unsigned long long)a0;
+ (unsigned char)uint8FromBytes:(id)a0;
+ (unsigned int)uint32FromBytes:(id)a0;
+ (id)dataWithReverse:(id)a0;
+ (id)bytesFromUInt16:(unsigned short)a0;
+ (id)bytesFromString:(id)a0;
+ (unsigned short)uint16FromBytes:(id)a0;
+ (unsigned long long)uint64FromBytes:(id)a0;
+ (id)asciiStringFromHexString:(id)a0;
+ (id)hexStringFromASCIIString:(id)a0;
+ (id)decimalStringFromHexString:(id)a0;
+ (id)shared;
+ (id)hexStringFromData:(id)a0;

- (unsigned int)randomSequenceOfUnique;

@end
