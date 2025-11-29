@class NSArray, NSString;

@interface BDUGLuckyPendantTipsConfModel : BDUGLuckyJSONModel

@property (nonatomic) BOOL tipEnable;
@property (copy, nonatomic) NSArray *bgColor;
@property (nonatomic) double tipsDuration;
@property (copy, nonatomic) NSString *textColor;
@property (copy, nonatomic) NSString *content;

- (void).cxx_destruct;

@end
