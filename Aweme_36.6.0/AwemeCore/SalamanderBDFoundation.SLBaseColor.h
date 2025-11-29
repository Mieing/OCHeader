@interface SalamanderBDFoundation.SLBaseColor : NSObject <SalamanderBDFoundation.ISLColor> {
    void /* unknown type, empty encoding */ __rts_red;
    void /* unknown type, empty encoding */ __rts_green;
    void /* unknown type, empty encoding */ __rts_blue;
    void /* unknown type, empty encoding */ __rts_alpha;
}

@property (nonatomic) long long red;
@property (nonatomic) long long green;
@property (nonatomic) long long blue;
@property (nonatomic) long long alpha;

- (id)init:(long long)a0 :(long long)a1 :(long long)a2 :(long long)a3;
- (id)toArgbString;
- (id)toRgbaString;
- (long long)toInt;
- (id)toPlatformColor;
- (id)init:(id)a0;
- (id)init;

@end
