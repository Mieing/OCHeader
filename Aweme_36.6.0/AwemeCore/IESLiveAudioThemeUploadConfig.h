@class NSString, NSNumber;

@interface IESLiveAudioThemeUploadConfig : NSObject

@property (copy, nonatomic) NSString *anchorID;
@property (retain, nonatomic) NSNumber *roomID;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } cropRect;
@property (nonatomic) double compressionQuality;

- (void).cxx_destruct;

@end
