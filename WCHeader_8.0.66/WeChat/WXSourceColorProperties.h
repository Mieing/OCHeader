@class NSString;

@interface WXSourceColorProperties : NSObject

@property (copy, nonatomic) NSString *colorPrimaries;
@property (copy, nonatomic) NSString *transferFunction;
@property (copy, nonatomic) NSString *YCbCrMatrix;

- (id)init;
- (id)makeSettingsColorDictionary:(struct WxVideoTransParaABA { int x0; int x1; float x2; int x3; float x4; float x5; int x6; int x7; int x8; int x9; float x10; float x11; float x12; float x13; int x14; float x15; float x16; BOOL x17; int x18; int x19; int x20; int x21; int x22; int x23; int x24; int x25; BOOL x26; float x27; float x28; int x29; int x30; struct WXColorProperties { int x0; int x1; int x2; int x3; } x31; BOOL x32; int x33; int x34; })a0 isHEVCHardware:(BOOL)a1 isHEVCSoftware:(BOOL)a2 enableSetColorProperty:(int)a3;
- (id)makeSettingsRangeDictionary:(struct WxVideoTransParaABA { int x0; int x1; float x2; int x3; float x4; float x5; int x6; int x7; int x8; int x9; float x10; float x11; float x12; float x13; int x14; float x15; float x16; BOOL x17; int x18; int x19; int x20; int x21; int x22; int x23; int x24; int x25; BOOL x26; float x27; float x28; int x29; int x30; struct WXColorProperties { int x0; int x1; int x2; int x3; } x31; BOOL x32; int x33; int x34; })a0 enableSetColorProperty:(int)a1;
- (BOOL)needHDRtoSDR:(struct WxVideoTransParaABA { int x0; int x1; float x2; int x3; float x4; float x5; int x6; int x7; int x8; int x9; float x10; float x11; float x12; float x13; int x14; float x15; float x16; BOOL x17; int x18; int x19; int x20; int x21; int x22; int x23; int x24; int x25; BOOL x26; float x27; float x28; int x29; int x30; struct WXColorProperties { int x0; int x1; int x2; int x3; } x31; BOOL x32; int x33; int x34; })a0 enableSetColorProperty:(int)a1;
- (void).cxx_destruct;

@end
