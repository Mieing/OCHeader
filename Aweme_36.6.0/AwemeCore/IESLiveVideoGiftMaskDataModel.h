@class NSString;

@interface IESLiveVideoGiftMaskDataModel : NSObject

@property (nonatomic) long long index;
@property (copy, nonatomic) NSString *tag;
@property (nonatomic) long long sourceType;
@property (nonatomic) long long fitType;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } sourceRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } maskRect;
@property (nonatomic) struct CGRect { struct CGPoint { double x; double y; } origin; struct CGSize { double width; double height; } size; } renderMaskRect;
@property (nonatomic) long long sameCount;

- (void).cxx_destruct;

@end
