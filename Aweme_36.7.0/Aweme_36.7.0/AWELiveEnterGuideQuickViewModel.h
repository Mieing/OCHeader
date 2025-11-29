@class NSString, NSAttributedString;

@interface AWELiveEnterGuideQuickViewModel : NSObject

@property (copy, nonatomic) NSString *content;
@property (retain, nonatomic) NSAttributedString *attributedString;
@property (nonatomic) double caculateWidth;

- (void)precaculateCellWidthForContent:(id)a0;
- (void).cxx_destruct;
- (id)color;
- (id)initWithContent:(id)a0;

@end
