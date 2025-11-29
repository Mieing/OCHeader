@class UIColor, NSString, IESECURLModel, UIImage, NSNumber;

@interface IESECMoreOptionItem : NSObject <IESECMoreOptionItemProtocol>

@property (retain, nonatomic) UIImage *image;
@property (copy, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *imageName;
@property (copy, nonatomic) IESECURLModel *imageUrl;
@property (retain, nonatomic) NSNumber *iconRadius;
@property (copy, nonatomic) id /* block */ tapBlock;
@property (retain, nonatomic) UIColor *backgroundColor;
@property (retain, nonatomic) NSString *bubbleContent;
@property (nonatomic) Class viewClass;
@property (readonly) unsigned long long hash;
@property (readonly) Class superclass;
@property (readonly, copy) NSString *description;
@property (readonly, copy) NSString *debugDescription;

- (id)initWithImageName:(id)a0 title:(id)a1;
- (void).cxx_destruct;
- (id)initWithImage:(id)a0 title:(id)a1;

@end
