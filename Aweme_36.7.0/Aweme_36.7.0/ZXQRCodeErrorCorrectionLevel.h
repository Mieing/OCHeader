@class NSString;

@interface ZXQRCodeErrorCorrectionLevel : NSObject

@property (readonly, nonatomic) int bits;
@property (readonly, copy, nonatomic) NSString *name;
@property (readonly, nonatomic) int ordinal;

+ (id)errorCorrectionLevelM;
+ (id)errorCorrectionLevelQ;
+ (id)errorCorrectionLevelH;
+ (id)forBits:(int)a0;
+ (id)errorCorrectionLevelL;

- (id)initWithOrdinal:(int)a0 bits:(int)a1 name:(id)a2;
- (void).cxx_destruct;
- (id)description;

@end
