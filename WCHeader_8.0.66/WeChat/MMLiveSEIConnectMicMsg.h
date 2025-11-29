@class NSArray;

@interface MMLiveSEIConnectMicMsg : NSObject

@property (retain, nonatomic) NSArray *list;
@property (nonatomic) double x;
@property (nonatomic) double y;
@property (nonatomic) double w;
@property (nonatomic) double h;
@property (nonatomic) unsigned long long z;
@property (nonatomic) unsigned long long f;
@property (nonatomic) unsigned long long m;
@property (nonatomic) double a;
@property (nonatomic) unsigned long long i;
@property (retain, nonatomic) NSArray *hl;
@property (retain, nonatomic) NSArray *gl;
@property (readonly, nonatomic) BOOL emptyUserListAllowed;

- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })normalizedAnchorFrame;
- (unsigned long long)anchorUIType;
- (BOOL)hasOtherConnectMicAnchor;
- (unsigned long long)audioModeUsersCount;
- (unsigned long long)micLayoutMode;
- (BOOL)isInConnectedMicUI;
- (void).cxx_destruct;

@end
