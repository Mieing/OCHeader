@interface ColorConfig : NSObject

@property (nonatomic) union _GLKVector4 { struct { float x; float y; float z; float w; } ; struct { float r; float g; float b; float a; } ; struct { float s; float t; float p; float q; } ; float v[4]; } color1;
@property (nonatomic) union _GLKVector4 { struct { float x; float y; float z; float w; } ; struct { float r; float g; float b; float a; } ; struct { float s; float t; float p; float q; } ; float v[4]; } color2;
@property (nonatomic) union _GLKVector4 { struct { float x; float y; float z; float w; } ; struct { float r; float g; float b; float a; } ; struct { float s; float t; float p; float q; } ; float v[4]; } color3;
@property (nonatomic) union _GLKVector4 { struct { float x; float y; float z; float w; } ; struct { float r; float g; float b; float a; } ; struct { float s; float t; float p; float q; } ; float v[4]; } bgColor1;
@property (nonatomic) union _GLKVector4 { struct { float x; float y; float z; float w; } ; struct { float r; float g; float b; float a; } ; struct { float s; float t; float p; float q; } ; float v[4]; } bgColor2;
@property (nonatomic) union _GLKVector4 { struct { float x; float y; float z; float w; } ; struct { float r; float g; float b; float a; } ; struct { float s; float t; float p; float q; } ; float v[4]; } color1InDarkMode;
@property (nonatomic) union _GLKVector4 { struct { float x; float y; float z; float w; } ; struct { float r; float g; float b; float a; } ; struct { float s; float t; float p; float q; } ; float v[4]; } color2InDarkMode;
@property (nonatomic) union _GLKVector4 { struct { float x; float y; float z; float w; } ; struct { float r; float g; float b; float a; } ; struct { float s; float t; float p; float q; } ; float v[4]; } color3InDarkMode;
@property (nonatomic) union _GLKVector4 { struct { float x; float y; float z; float w; } ; struct { float r; float g; float b; float a; } ; struct { float s; float t; float p; float q; } ; float v[4]; } bgColor1InDarkMode;
@property (nonatomic) union _GLKVector4 { struct { float x; float y; float z; float w; } ; struct { float r; float g; float b; float a; } ; struct { float s; float t; float p; float q; } ; float v[4]; } bgColor2InDarkMode;
@property (nonatomic) unsigned int startSecond;
@property (nonatomic) unsigned int endSecond;

@end
