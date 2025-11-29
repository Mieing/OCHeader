@class NSArray, UIImageView, UILabel;

@interface MMLiveRoomSelectButton : MMUIButton

@property (copy, nonatomic) NSArray *roomContacts;
@property (retain, nonatomic) UIImageView *iconView;
@property (retain, nonatomic) UILabel *textLabel;
@property (retain, nonatomic) UIImageView *arrowImageView;
@property (nonatomic) double maxWidth;

- (id)initWithStyle:(long long)a0;
- (void)updateWithRoomContacts:(id)a0;
- (void)sizeToFit;
- (void)adjustSubViewsCenterY;
- (void).cxx_destruct;

@end
