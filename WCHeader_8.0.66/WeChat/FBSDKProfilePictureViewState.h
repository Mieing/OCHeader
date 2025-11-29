@class NSString;

@interface FBSDKProfilePictureViewState : NSObject

@property (readonly, nonatomic) BOOL imageShouldFit;
@property (readonly, nonatomic) unsigned long long pictureMode;
@property (readonly, copy, nonatomic) NSString *profileID;
@property (readonly, nonatomic) double scale;
@property (readonly, nonatomic) struct CGSize { double width; double height; } size;

- (id)initWithProfileID:(id)a0 size:(struct CGSize { double x0; double x1; })a1 scale:(double)a2 pictureMode:(unsigned long long)a3 imageShouldFit:(BOOL)a4;
- (unsigned long long)hash;
- (BOOL)isEqual:(id)a0;
- (BOOL)isEqualToState:(id)a0;
- (BOOL)isValidForState:(id)a0;
- (void).cxx_destruct;

@end
