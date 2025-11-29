@class NSString, BDReaderTextRange, UIColor;

@interface BDReaderLineInfo : NSObject

@property (copy, nonatomic) NSString *chapterId;
@property (copy, nonatomic) NSString *lineId;
@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) BDReaderTextRange *infoRange;
@property (nonatomic) BOOL disable;
@property (retain, nonatomic) UIColor *color;
@property (copy, nonatomic) id /* block */ colorBlock;
@property (nonatomic) unsigned long long level;
@property (retain, nonatomic) id extra;
@property (nonatomic) struct _NSRange { unsigned long long location; unsigned long long length; } range;

- (void).cxx_destruct;

@end
