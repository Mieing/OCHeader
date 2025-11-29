@interface CKFeatureHelper : NSObject

+ (int)convertType:(unsigned long long)a0;
+ (id)getFeatureInputWithResList:(id)a0 algorithmType:(unsigned long long)a1 algorithmParams:(id)a2;
+ (id)getFeatureInputWithResList:(id)a0 algorithmType:(unsigned long long)a1 algorithmConfig:(id)a2 algorithmParams:(id)a3;
+ (id)covertToBinaryzation:(struct CGSize { double x0; double x1; })a0 pixels:(unsigned int *)a1 scale:(float)a2;
+ (unsigned long long)convertBachType:(int)a0;
+ (id)getConfByAlgorithmType:(unsigned long long)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertToNLERect:(struct CRect { struct ProtobufCMessage { struct ProtobufCMessageDescriptor *x0; unsigned int x1; struct ProtobufCMessageUnknownField *x2; } x0; float x1; float x2; float x3; float x4; float x5; } *)a0;
+ (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })convertToAbsoluteValueRect:(struct CRect { struct ProtobufCMessage { struct ProtobufCMessageDescriptor *x0; unsigned int x1; struct ProtobufCMessageUnknownField *x2; } x0; float x1; float x2; float x3; float x4; float x5; } *)a0 size:(struct CGSize { double x0; double x1; })a1;
+ (void)convertSegInfoBBox:(struct CSaliencySegInfo { struct ProtobufCMessage { struct ProtobufCMessageDescriptor *x0; unsigned int x1; struct ProtobufCMessageUnknownField *x2; } x0; int x1; float x2; float x3; float x4; float x5; float x6; float x7; float x8; float x9; float x10; int x11; unsigned long long x12; unsigned int *x13; unsigned long long x14; unsigned int *x15; } *)a0 originSize:(struct CGSize { double x0; double x1; })a1;
+ (id)convertInt32Array:(int *)a0 size:(unsigned long long)a1;
+ (id)convertFloatArray:(float *)a0 size:(unsigned long long)a1;
+ (id)convertFloat2Array:(struct CFloat2 **)a0 size:(unsigned long long)a1;

@end
