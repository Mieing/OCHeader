@class MMTextView;

@interface MJMovieTextButton : MMUIButton

@property (nonatomic) unsigned long long style;
@property (retain, nonatomic) MMTextView *textView;
@property (retain, nonatomic) MMTextView *placeholderView;

+ (id)buildTextViewWithFont:(id)a0 maximumNumberOfLines:(unsigned long long)a1;

- (id)initWithStyle:(unsigned long long)a0;
- (void)setupViews;
- (void)setText:(id)a0;
- (void)setPlaceholder:(id)a0;
- (id)_textView;
- (void).cxx_destruct;

@end
