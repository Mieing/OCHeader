@class NSString, UIFont;

@interface AWEPlayInteractionDescriptionAttachModel : NSObject

@property (retain, nonatomic) id content;
@property (nonatomic) long long contentMode;
@property (nonatomic) struct CGSize { double width; double height; } attachmentSize;
@property (retain, nonatomic) UIFont *alignFont;
@property (nonatomic) long long alignment;
@property (retain, nonatomic) NSString *accessibilityString;

+ (id)attachmentModelWithContent:(id)a0 contentMode:(long long)a1 attachmentSize:(struct CGSize { double x0; double x1; })a2 alignToFont:(id)a3 alignment:(long long)a4;

- (void).cxx_destruct;

@end
