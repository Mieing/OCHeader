@class NSString;

@interface IESLiveStreamPlayerLayoutGameViceInfo : NSObject

@property (readonly, copy, nonatomic) NSString *ts;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } gameClip;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cameraClip;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } customCameraClip;
@property (readonly, nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cameraHorizontalPosition;
@property (readonly, nonatomic) long long cameraVerticalType;
@property (readonly, nonatomic) long long cameraHorizontalType;
@property (readonly, nonatomic) BOOL isViceHidden;
@property (readonly, nonatomic) BOOL needUpdateExtension;
@property (readonly, copy, nonatomic) NSString *roomID;

- (BOOL)_compareClipRectNotEqual:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 rect2:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a1;
- (struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })_validPosition:(struct CGRect { struct CGPoint { double x0; double x1; } x0; struct CGSize { double x0; double x1; } x1; })a0 streamSize:(struct CGSize { double x0; double x1; })a1;
- (BOOL)updateViceViewRelatedAttributesWithDictionary:(id)a0 roomid:(id)a1 streamSize:(struct CGSize { double x0; double x1; })a2;
- (void)updateViceViewRelatedAttributesWithExtension:(id)a0 roomid:(id)a1 streamSize:(struct CGSize { double x0; double x1; })a2;
- (void).cxx_destruct;
- (id)init;

@end
