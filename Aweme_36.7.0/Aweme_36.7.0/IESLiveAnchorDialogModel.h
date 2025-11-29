@class NSString, UIImage, NSArray;

@interface IESLiveAnchorDialogModel : NSObject

@property (nonatomic) unsigned long long style;
@property (copy, nonatomic) NSString *title;
@property (copy, nonatomic) NSString *description;
@property (copy, nonatomic) UIImage *image;
@property (retain, nonatomic) NSArray *actions;
@property (nonatomic, getter=isVertical) BOOL vertical;
@property (nonatomic) long long seconds;
@property (copy, nonatomic) NSString *formatText;
@property (copy, nonatomic) id /* block */ countdownCompletedBlock;

- (BOOL)needTimer;
- (void).cxx_destruct;
- (id)initWithStyle:(unsigned long long)a0;

@end
