@class NSAttributedString;
@protocol IESLiveImage;

@interface IESLiveRichTextPiece : NSObject

@property (nonatomic) unsigned long long type;
@property (retain, nonatomic) id<IESLiveImage> image;
@property (retain, nonatomic) NSAttributedString *attributedString;

- (void).cxx_destruct;

@end
