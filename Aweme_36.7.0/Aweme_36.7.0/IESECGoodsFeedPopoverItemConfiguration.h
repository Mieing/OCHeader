@class NSString, UIImage;

@interface IESECGoodsFeedPopoverItemConfiguration : NSObject

@property (copy, nonatomic) NSString *identifer;
@property (copy, nonatomic) NSString *text;
@property (copy, nonatomic) id /* block */ tapAction;
@property (copy, nonatomic) NSString *iconUrl;
@property (retain, nonatomic) UIImage *iconImage;
@property (retain, nonatomic) UIImage *iconImage2;
@property (nonatomic) unsigned long long iconPosition;
@property (nonatomic) struct CGSize { double width; double height; } iconSize;
@property (nonatomic) struct CGSize { double width; double height; } iconSize2;
@property (nonatomic) double space;
@property (nonatomic) double space2;
@property (copy, nonatomic) id /* block */ didTapAction;

- (void)setActionType:(unsigned long long)a0 params:(id)a1;
- (void)setupOpenSchemaItem:(id)a0;
- (void)setupCopyItem:(id)a0;
- (void).cxx_destruct;

@end
