@class NSString;

@interface MMLiveRemoteTrtcCustomRenderUser : NSObject

@property (nonatomic) unsigned long long renderSrc;
@property (retain, nonatomic) NSString *sdkUserId;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } normalizeFrame;
@property (retain, nonatomic) NSString *userName;

+ (id)genCustomRenderUserWithUserId:(id)a0 userName:(id)a1 renderSrc:(unsigned long long)a2 normalizeFrame:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a3;

- (BOOL)isValid;
- (void).cxx_destruct;

@end
