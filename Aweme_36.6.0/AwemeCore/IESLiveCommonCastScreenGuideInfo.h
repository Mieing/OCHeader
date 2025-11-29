@class NSString, UIView;

@interface IESLiveCommonCastScreenGuideInfo : NSObject

@property (nonatomic) BOOL enable;
@property (retain, nonatomic) NSString *title;
@property (retain, nonatomic) NSString *detailInfo;
@property (retain, nonatomic) NSString *buttonTitle;
@property (copy, nonatomic) id /* block */ actionBlock;
@property (retain, nonatomic) UIView *container;

- (void).cxx_destruct;

@end
