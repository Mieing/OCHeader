@class NSArray, NSString;

@interface ZXQRCodeMode : NSObject

@property (readonly, nonatomic) NSArray *characterCountBitsForVersions;
@property (readonly, nonatomic) int bits;
@property (readonly, copy, nonatomic) NSString *name;

+ (id)terminatorMode;
+ (id)numericMode;
+ (id)alphanumericMode;
+ (id)structuredAppendMode;
+ (id)byteMode;
+ (id)fnc1FirstPositionMode;
+ (id)eciMode;
+ (id)kanjiMode;
+ (id)fnc1SecondPositionMode;
+ (id)hanziMode;
+ (id)forBits:(int)a0;

- (id)initWithCharacterCountBitsForVersions:(id)a0 bits:(int)a1 name:(id)a2;
- (int)characterCountBits:(id)a0;
- (void).cxx_destruct;
- (id)description;

@end
