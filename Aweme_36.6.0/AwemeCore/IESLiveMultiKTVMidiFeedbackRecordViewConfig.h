@class NSArray, UIColor, NSString;

@interface IESLiveMultiKTVMidiFeedbackRecordViewConfig : NSObject

@property (nonatomic) unsigned long long style;
@property (copy, nonatomic) NSArray *lineViewColors;
@property (copy, nonatomic) NSArray *scoreNumberColors;
@property (copy, nonatomic) NSArray *scoreUnitColors;
@property (retain, nonatomic) UIColor *songTitleColor;
@property (copy, nonatomic) NSString *backgroundURL;
@property (nonatomic) BOOL needTag;

- (void).cxx_destruct;
- (id)initWithStyle:(unsigned long long)a0;

@end
